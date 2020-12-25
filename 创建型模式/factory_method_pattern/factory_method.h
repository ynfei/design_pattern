////////////////////////////////////////
// factory_method.h
// Declaration of the  class Factory Method
// create on: 20201224
// author: Yannick
////////////////////////////////////////

//抽象产品类AbstractProduct
class AbstractProduct
{
public:
  AbstractProduct();
  void virtual printName() = 0;
  void virtual play() = 0;
};

//具体产品类Basketball
class Basketball : public AbstractProduct
{
public:
  Basketball();
  void printName();
  void play();
};

//具体产品类Football
class Football : public AbstractProduct
{
public:
  Football();
  void printName();
  void play();
};

//具体产品类Volleyball
class Volleyball : public AbstractProduct
{
public:
  Volleyball();
  void printName();
  void play();
};

//抽象工厂类
class AbstractFactroy
{
public:
  AbstractFactroy();
  virtual AbstractProduct* getSportProduct() = 0;
};

//具体工厂类BaseketballFactory
class BasketballFactory : public AbstractFactroy
{
public:
  BasketballFactory();
  AbstractProduct* getSportProduct();
};

//具体工厂类FootballFactory
class FootballFactory : public AbstractFactroy
{
public:
  FootballFactory();
  AbstractProduct* getSportProduct();
};

//具体工厂类VolleyballFactory
class VolleyballFactory : public AbstractFactroy
{
public:
  VolleyballFactory();
  AbstractProduct* getSportProduct();
};
