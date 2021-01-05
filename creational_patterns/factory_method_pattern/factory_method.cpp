///////////////////////////////////////
// factory_method.cpp
// Definition of the class Fctory Method
// create on: 20201224
// author: Yannick
///////////////////////////////////////

#include "factory_method.h"
#include <iostream>

using std::cout;
using std::endl;

AbstractProduct::AbstractProduct()
{
}

Basketball::Basketball()
{
  printName();
  play();
}

void Basketball::printName()
{
  cout << "This ball is Basketball!" << endl;
}

void Basketball::play()
{
  cout << "Play Basketball!" << endl;
}

Football::Football()
{
  printName();
  play();
}

void Football::printName()
{
  cout << "This ball is Football!" << endl;
}

void Football::play()
{
  cout << "Play Football!" << endl;
}

Volleyball::Volleyball()
{
  printName();
  play();
}

void Volleyball::printName()
{
  cout << "This ball is Volleyball" << endl;
}

void Volleyball::play()
{
  cout << "Play Volleyball!" << endl;
}

AbstractFactroy::AbstractFactroy()
{
}

BasketballFactory::BasketballFactory()
{
  cout << "Basketball Factory" << endl;
}

AbstractProduct* BasketballFactory::getSportProduct()
{
  cout << "produce basekball" << endl;
  return new Basketball();
}

FootballFactory::FootballFactory()
{
  cout << "Football Factory" << endl;
}

AbstractProduct* FootballFactory::getSportProduct()
{
  cout << "produce football" << endl;
  return new Football();
}

VolleyballFactory::VolleyballFactory()
{
  cout << "Volleyball Factory" << endl;
}

AbstractProduct* VolleyballFactory::getSportProduct()
{
  cout << "produce volleyball" << endl;
  return new Volleyball();
}

int main(int argc, char** argv)
{
  cout << "工厂方法模式" << endl;

  AbstractProduct* porduct = NULL;
  AbstractFactroy* factory = NULL;

  factory = new BasketballFactory();
  porduct = factory->getSportProduct();

  factory = new FootballFactory();
  porduct = factory->getSportProduct();

  factory = new VolleyballFactory();
  porduct = factory->getSportProduct();

  return 0;
}