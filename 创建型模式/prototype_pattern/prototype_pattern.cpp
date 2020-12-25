#include "prototype_pattern.h"

void WorkModel::setWorkModelName(string _model_name)
{
  this->model_name_ = _model_name;
}

PrototypeWork::PrototypeWork()
{
}

ConcreteWork::ConcreteWork()
{
}

ConcreteWork::ConcreteWork(string _name, int _id, string _model_name)
{
  this->name_ = _name;
  this->id_ = _id;
  this->workmodel_ = new WorkModel();
  this->workmodel_->model_name_ = _model_name;
}

ConcreteWork* ConcreteWork::clone()
{
  ConcreteWork* work = new ConcreteWork();
  work->setName(this->name_);
  work->setID(this->id_);
  work->workmodel_ = this->workmodel_;
  return work;
}

void ConcreteWork::setName(string _name)
{
  this->name_ = _name;
}

void ConcreteWork::setID(int _id)
{
  this->id_ = _id;
}

void ConcreteWork::setModel(WorkModel* _workmodel)
{
  this->workmodel_ = _workmodel;
}

void ConcreteWork::printWorkInfo()
{
  cout << "name: " << this->name_ << endl;
  cout << "id: " << this->id_ << endl;
  cout << "modelname: " << this->workmodel_->model_name_ << endl;
}

int main(int argc, char** argv)
{
  cout << "原型模式" << endl;
  //浅拷贝
  // ConcreteWork* singlework = new ConcreteWork("single", 1001, "single_model");
  // cout << "single的作业" << endl;
  // singlework->printWorkInfo();

  // cout << "jungle抄作业" << endl;
  // ConcreteWork* junglework = singlework;
  // cout << "jungle的作业" << endl;
  // junglework->printWorkInfo();

  // //抄完改学号和名字
  // cout << "jugle抄完作业，改名字" << endl;
  // junglework->setName("jungle");
  // junglework->setID(1002);
  // WorkModel* junglemodel = new WorkModel();
  // junglemodel->setWorkModelName("jungle_model");
  // junglework->setModel(junglemodel);

  // cout << "single的作业" << endl;
  // singlework->printWorkInfo();
  // cout << "jugle的作业" << endl;
  // junglework->printWorkInfo();

  //////////////////////////////////////////////////////////////////////////
  //深拷贝
  ConcreteWork* singlework = new ConcreteWork("single", 1001, "single_model");
  cout << "single的作业" << endl;
  singlework->printWorkInfo();

  ConcreteWork* junglework = singlework->clone();
  cout << "jungle的作业" << endl;
  junglework->printWorkInfo();

  //抄完作业改名字
  cout << "抄完作业改名字" << endl;
  junglework->setName("jungle");
  junglework->setID(1002);
  WorkModel* junglemodel = new WorkModel();
  junglemodel->setWorkModelName("jungle_model");
  junglework->setModel(junglemodel);

  cout << "single的作业" << endl;
  singlework->printWorkInfo();
  cout << "jugle的作业" << endl;
  junglework->printWorkInfo();

  return 0;
}