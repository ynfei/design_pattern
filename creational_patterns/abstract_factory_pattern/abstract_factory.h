////////////////////////////////////////////////
// abstract_factory.h
// Declaration of the class Abstract Factory
// create on: 20201224
// author: Yannick
/////////////////////////////////////////////////

#include <iostream>

//抽象产品类球类
class AbstractBall
{
public:
  AbstractBall();
  virtual void play() = 0;
};

class Basketball : public AbstractBall
{
public:
  Basketball();
  void play();
};

class Football : public AbstractBall
{
public:
  Football();
  void play();
};

//抽象产品Shirt类
class AbstractShirt
{
public:
  AbstractShirt();
  virtual void wear() = 0;
};

class BasketballShirt : public AbstractShirt
{
public:
  BasketballShirt();
  void wear();
};

class FootballShirt : public AbstractShirt
{
public:
  FootballShirt();
  void wear();
};

//抽象工厂类
class AbstractFactory
{
public:
  AbstractFactory();
  virtual AbstractBall* getBall() = 0;
  virtual AbstractShirt* getShirt() = 0;
};

class BasketballFactory : public AbstractFactory
{
public:
  BasketballFactory();
  AbstractBall* getBall();
  AbstractShirt* getShirt();
};

class FootballFactory : public AbstractFactory
{
public:
  FootballFactory();
  AbstractBall* getBall();
  AbstractShirt* getShirt();
};