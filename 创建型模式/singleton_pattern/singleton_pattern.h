//////////////////////////////////////////////////
// singleton.h
// Declaration of the class Singleton
// create on: 20201225
// author: Yannick
///////////////////////////////////////////////////

#include <iostream>

using std::cout;
using std::endl;

class Singleton
{
public:
  static Singleton* getInstance();

private:
  Singleton();
  static Singleton* singleton_;
};