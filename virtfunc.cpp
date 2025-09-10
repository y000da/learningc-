#include <iostream>

using namespace std;


class Base {
  public:
    virtual void show() = 0;
    virtual ~Base() { cout << "Base удален" << endl; }
};

class Derv1 : public Base {
  public:
    void show() { cout << "Derv1" << endl; }
    ~Derv1() { cout << "Derv1 удален" << endl; }
};

class Derv2 : public Base {
  public:
    void show() { cout << "Derv2" << endl; }
    ~Derv2() { cout << "Derv2 удален" << endl; }
};


int main() {

  Base* ptr[] = {new Derv1, new Derv2};

  ptr[0]->show();
  ptr[1]->show();
  
  delete ptr[0];
  delete ptr[1];

  return 0;
}