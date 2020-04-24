#include "mylib/mylib.h"

#include <iostream>

#include "mylib2/doublethis.h"

void MyLibClass::setNumber(int number)
{
  number_ = number;
}

int MyLibClass::getNumber()
{
  return number_;
}

void MyLibClass::print()
{
  std::cout << "Number is: " << number_ << std::endl;
  std::cout << "Doubled: " << doubleThis(number_) << std::endl;
}
