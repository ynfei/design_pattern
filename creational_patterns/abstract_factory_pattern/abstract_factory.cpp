#include "abstract_factory.h"

using std::cout;
using std::endl;

AbstractBall::AbstractBall()
{
}

Basketball::Basketball()
{
  cout << "This is BasketBall" << endl;
}

void Basketball::play()
{
  cout << "play basketball" << endl;
}

Football::Football()
{
  cout << "This is Football" << endl;
}

void Football::play()
{
  cout << "play football" << endl;
}

AbstractShirt::AbstractShirt()
{
}

BasketballShirt::BasketballShirt()
{
  cout << "This is basketballshirt" << endl;
}

void BasketballShirt::wear()
{
  cout << "wear basketballshirt" << endl;
}

FootballShirt::FootballShirt()
{
  cout << "This is footballshirt" << endl;
}

void FootballShirt::wear()
{
  cout << "wear football shirt" << endl;
}

AbstractFactory::AbstractFactory()
{
}

BasketballFactory::BasketballFactory()
{
  cout << "basetball factory" << endl;
}

AbstractBall* BasketballFactory::getBall()
{
  cout << "produce basketball" << endl;
  return new Basketball();
}

AbstractShirt* BasketballFactory::getShirt()
{
  cout << "produce basketball shirt" << endl;
  return new BasketballShirt();
}

FootballFactory::FootballFactory()
{
  cout << "football factory" << endl;
}

AbstractBall* FootballFactory::getBall()
{
  cout << "produce football" << endl;
  return new Football();
}

AbstractShirt* FootballFactory::getShirt()
{
  cout << "produce football shirt" << endl;
  return new FootballShirt();
}

int main(int argc, char** argv)
{
  cout << "抽象工厂模式" << endl;

  AbstractFactory* factory = NULL;
  AbstractBall* ball = NULL;
  AbstractShirt* shirt = NULL;

  factory = new BasketballFactory();
  ball = factory->getBall();
  shirt = factory->getShirt();

  factory = new FootballFactory();
  ball = factory->getBall();
  shirt = factory->getShirt();

  return 0;
}