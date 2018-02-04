/////////////////////////////////////////////////////////////
// Explicit_Load_Component.cpp - load dll on demand        //
//                                                         //
// Jim Fawcett, CSE775 - Distributed Objects, Spring 2015  //
/////////////////////////////////////////////////////////////
/*
 * Note: Doesn't need to include Component.Lib in project
 */
#include <dlfcn.h>  // get access to dlopen and dlsym
#include <iostream>
#include "../Component/ITest.h"

int main()
{
  std::cout << "\n  Explicit Loader Demo";
  std::cout << "\n ======================\n";

  std::cout << "\n  pretending to test the testdriver\n";
  
  // using sudo dolphin, copy libComponent.so into usr/lib

  void* handle = dlopen("./libComponent.so", RTLD_LAZY); 
  // !!dlopen path is ComponentExplicitClient Makefile's(directory of your current bash), not current bin
  // or cd into bin/ and run local makefile
  if (!handle)
  {
    std::cout << "\n  failed to load libComponent.so\n\n";
    return 1;
  }
  //using GCreate = ITest*(*)(); g++ 4.9 won't compile this correct declaration
  typedef ITest*(*GCreate)();
  GCreate gCreate = (GCreate)dlsym(handle, "globalCreateTest");
  if (!gCreate)
  {
    std::cout << "\n  failed to acquire create function\n\n";
    return 1;
  }

  ITest* pTest = gCreate();
  if (pTest->test())
    std::cout << "\n  test passed";
  else
    std::cout << "\n  test failed";

  dlclose(handle);
  std::cout << "\n\n";
}
