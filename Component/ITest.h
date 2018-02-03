#pragma once
/////////////////////////////////////////////////////////////
// ITest.h - interface for Component                       //
//                                                         //
// Jim Fawcett, CSE775 - Distributed Objects, Spring 2015  //
/////////////////////////////////////////////////////////////

class ITest
{
public:
  virtual ~ITest(void) {}
  static ITest* createTest();  // built-in factory
  virtual bool test() = 0;
};

extern "C" {                  // unmangled global factory
  ITest* globalCreateTest();
}
