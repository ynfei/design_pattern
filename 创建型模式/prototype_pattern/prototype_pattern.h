////////////////////////////////////////////////
// prototype_pattern.h
// Declaration of the class Prototype Pattern
// create on: 20201225
// author: Yannick
/////////////////////////////////////////////////

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

//作业包含几个部分：姓名（name）、学号（idNum）、模型(workModel)。首先定义一个workModel类：
class WorkModel
{
public:
  string model_name_;
  void setWorkModelName(string _model_name);
};

//抽象原型类
class PrototypeWork
{
public:
  PrototypeWork();
  virtual PrototypeWork* clone() = 0;
};

//具体原型类
class ConcreteWork : public PrototypeWork
{
public:
  ConcreteWork();
  ConcreteWork(string _name, int _id, string _model_name);
  ConcreteWork* clone();
  void setName(string _name);
  void setID(int _id);
  void setModel(WorkModel* _work_model);
  void printWorkInfo();

private:
  string name_;
  int id_;
  WorkModel* workmodel_;
};