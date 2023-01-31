#include <iostream>
#include "student.h"
using namespace std;

int main() {
    
  Student x;

  x.set_Student("Peter", 21, 2.5);
  x.print_name();
  x.print_age();

  Student a[2];
  
  a[1].set_Student("James",20,69);

  Student *p;
  p = &a[1];
  (*p).print_all();

  Student *pp = new Student;

  (*pp).set_Student("Charles",16,69);
  pp->print_all();

  delete pp;

  return 0;
}