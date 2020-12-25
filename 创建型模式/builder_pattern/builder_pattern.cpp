#include "builder_pattern.h"

House::House()
{
}
void House::setFloor(const string& _floor)
{
  this->floor_ = _floor;
}

void House::setWall(const string& _wall)
{
  this->wall_ = _wall;
}

void House::setRoof(const string& _roof)
{
  this->roof_ = _roof;
}

void House::printHouseInfo()
{
  cout << "Floor: " << this->floor_.c_str() << endl;
  cout << "Wall: " << this->wall_.c_str() << endl;
  cout << "Roof: " << this->roof_.c_str() << endl;
}

AbstractBuilder::AbstractBuilder()
{
  house_ = new House();
}

AbstractBuilder::~AbstractBuilder()
{
  delete house_;
}

ConcreteBuilderA::ConcreteBuilderA()
{
  cout << "ConcreteBuilderA" << endl;
}

void ConcreteBuilderA::buildFloor()
{
  this->house_->setFloor("Floor_A");
}

void ConcreteBuilderA::buildWall()
{
  this->house_->setWall("Wall_A");
}

void ConcreteBuilderA::buildRoof()
{
  this->house_->setRoof("Roof_A");
}

House* ConcreteBuilderA::getHouse()
{
  return this->house_;
}

ConcreteBuilderB::ConcreteBuilderB()
{
  cout << "ConcreteBuilderB" << endl;
}

void ConcreteBuilderB::buildFloor()
{
  this->house_->setFloor("Floor_B");
}

void ConcreteBuilderB::buildWall()
{
  this->house_->setWall("Wall_B");
}

void ConcreteBuilderB::buildRoof()
{
  this->house_->setRoof("Roof_B");
}

House* ConcreteBuilderB::getHouse()
{
  return this->house_;
}

Director::Director()
{
}

void Director::setBuilder(AbstractBuilder* _builder)
{
  this->builder_ = _builder;
}

House* Director::construct()
{
  builder_->buildFloor();
  builder_->buildWall();
  builder_->buildRoof();
  return builder_->getHouse();
}

int main(int argc, char** argv)
{
  cout << "建造者模式" << endl;

  Director* director = new Director();
  AbstractBuilder* builder;
  House* house;

  builder = new ConcreteBuilderA();
  director->setBuilder(builder);
  house = director->construct();
  house->printHouseInfo();

  builder = new ConcreteBuilderB();
  director->setBuilder(builder);
  house = director->construct();
  house->printHouseInfo();

  return 0;
}
