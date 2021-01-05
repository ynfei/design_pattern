/////////////////////////////////////////////////
// builder_pattern.h
// Declaration of the class Builder Pattern
// create on: 20201224
// author: Yannick
/////////////////////////////////////////////////

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

//产品类
class House
{
public:
  House();
  void setFloor(const string& _floor);
  void setWall(const string& _wall);
  void setRoof(const string& _roof);
  void printHouseInfo();

private:
  string floor_;
  string wall_;
  string roof_;
};

//抽象建造者
class AbstractBuilder
{
public:
  AbstractBuilder();
  ~AbstractBuilder();
  virtual void buildFloor() = 0;
  virtual void buildWall() = 0;
  virtual void buildRoof() = 0;
  virtual House* getHouse() = 0;

  House* house_;
};

//具体建造者
class ConcreteBuilderA : public AbstractBuilder
{
public:
  ConcreteBuilderA();
  void buildFloor();
  void buildWall();
  void buildRoof();
  House* getHouse();
};

class ConcreteBuilderB : public AbstractBuilder
{
public:
  ConcreteBuilderB();
  void buildFloor();
  void buildWall();
  void buildRoof();
  House* getHouse();
};

//指挥者
class Director
{
public:
  Director();
  void setBuilder(AbstractBuilder* _builder);
  House* construct();

private:
  AbstractBuilder* builder_;
};
