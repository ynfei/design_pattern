#include "singleton_pattern.h"

Singleton* Singleton::getInstance()
{
  if (singleton_ == NULL)
  {
    cout << "创建新实例" << endl;
    singleton_ = new Singleton();
  }
}

Singleton::Singleton()
{
  cout << "Constructor Singleton" << endl;
}

Singleton* Singleton::singleton_ = NULL;

int main(int argc, char** argv)
{
  cout << "单例模式" << endl;

  Singleton* s1 = Singleton::getInstance();
  Singleton* s2 = Singleton::getInstance();

  return 0;
}