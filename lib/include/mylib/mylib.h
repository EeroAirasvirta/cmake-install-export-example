#pragma once

class MyLibClass {
public:
  MyLibClass(): number_{0} {}

  void setNumber(int number);
  int getNumber();
  void print();

private:
  int number_;
};
