////////////////////////////////////////////////////////////////
// simple_factory.h
// Declaration of the Class Factory
// Create on: 20201223
// author: Yannick

//以生产球类的工厂为例
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class AbstractProduct
{
public:
  AbstractProduct();
  void virtual printName() = 0;
  void virtual play() = 0;
};

class Basketball : public AbstractProduct
{
public:
  Basketball();
  void printName();
  void play();
};

class Football : public AbstractProduct
{
public:
  Football();
  void printName();
  void play();
};

class Volleyball : public AbstractProduct
{
public:
  Volleyball();
  void printName();
  void play();
};

class Factory
{
public:
  Factory();
  AbstractProduct* getSportProduct(const string& product_name);
};
