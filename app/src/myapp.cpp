#include "mylib/mylib.h"

#include <iostream>

int main()
{
  std::cout << "Creating MyLib" << std::endl;
  MyLibClass mylib;

  mylib.setNumber(523);
  mylib.print();
  int num = mylib.getNumber();
  std::cout << "mylib gave number: " << num << std::endl;

  return 0;
}
