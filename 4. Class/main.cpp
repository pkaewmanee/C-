#include <iostream>
using namespace std;

class Program {
private:
  int x;
  double y;

public:
  void SetData() {
    x = 0;
    y = 0.0;
  }

  void SetData(int a, double b) {
    x = a;
    y = b;
  }

  int addX(int n) { return x + n; }

  double sumOFXY() { return x + y; }
};

class Student{

};

int main() {

  Program x;

  double x1;

  x.SetData(5, 5.5);

  x.addX(2);

  x1 = x.sumOFXY();

  cout << x1;

  Student a[2];

  a[1].set_Student();

  Student *p;
  p = &a[1];
  (*p).print_all();

  Student *pp = new Student;

  (*pp).set_Student("James Charles",20,69);
  pp->print_all();

  delete pp;

  return 0;
}