#include "simple_factory.h"

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

Factory::Factory()
{
}

AbstractProduct* Factory::getSportProduct(const string& product_name)
{
  AbstractProduct* product = NULL;
  if (product_name == "Basketball")
  {
    product = new Basketball();
  }
  else if (product_name == "Football")
  {
    product = new Football();
  }
  else if (product_name == "Volleyball")
  {
    product = new Volleyball();
  }
  return product;
}

int main(int argc, char** argv)
{
  cout << "==========简单工厂模式==========" << endl;

  Factory* factory = new Factory();
  AbstractProduct* product = NULL;

  product = factory->getSportProduct("Basketball");

  product = factory->getSportProduct("Football");

  product = factory->getSportProduct("Volleyball");

  return 0;
}