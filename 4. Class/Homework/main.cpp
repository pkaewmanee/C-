#include <iostream>
using namespace std;
#include "student.h"

int main(int argc, char **argv) {
  
  int i,c,n=(argc-1)/3;

  Student *s = new Student[n];

  i = 1;

  for(c = 0; i < argc - 1; c++){
    s[c].set_Student(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    i += 3;
  }

  for(c = 0; c<n; c++){
    s[c].print_all();
  }
  
  delete[] s;
  return 0;
}