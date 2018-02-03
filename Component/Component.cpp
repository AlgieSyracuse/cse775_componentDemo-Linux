/////////////////////////////////////////////////////////////
// Component.cpp - Demonstrate Component                   //
//                 - Implements interface                  //
//                 - Defines object factory                //
//                 - built as DLL                          //
//                                                         //
// Jim Fawcett, CSE775 - Distributed Objects, Spring 2015  //
/////////////////////////////////////////////////////////////
/*
 *  This component pretends to be a test driver
 */

#include "ITest.h"

class TestDriver : public ITest
{
public:
  TestDriver(void);
  virtual ~TestDriver(void);
  virtual bool test();
  // inherits static creational function
};

TestDriver::TestDriver(void)
{
  // initialize any test stuff here
}

TestDriver::~TestDriver(void)
{
  // deallocate test resources here
}

ITest* ITest::createTest()
{
  return new TestDriver;
}

ITest* globalCreateTest()
{
  return new TestDriver;
}

bool TestDriver::test()
{
  // put calls into tested code here
  // and return pass status not the
  // automatic fail below

  return false;
}

