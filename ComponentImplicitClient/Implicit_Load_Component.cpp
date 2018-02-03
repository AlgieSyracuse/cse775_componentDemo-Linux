/////////////////////////////////////////////////////////////
// Implicit_Load_Component.cpp - load dll at startup       //
//                                                         //
// Jim Fawcett, CSE775 - Distributed Objects, Spring 2015  //
/////////////////////////////////////////////////////////////

#include <iostream>
#include "../Component/ITest.h"

int main()
{
  std::cout << "\n  Implicit Loader Demo";
  std::cout << "\n ======================\n";

  std::cout << "\n  pretending to test the Component\n";
  ITest* pTest = ITest::createTest();
  if(pTest->test())
    std::cout << "\n  test passed\n\n";
  else
    std::cout << "\n  test failed\n\n";
}


