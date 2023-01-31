#ifndef student_h
#define student_h

#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int age;
  float score;

public:
  Student(string = "", int = 0, float = 0.0); //Constructor (Default)
  void set_name(string);
  void print_name();
  void set_age(int);
  int get_age();
  void print_age();
  void set_Student(string, int, float);
  void print_all();

  /*void set_Student() {
    name = "";
    age = 0;
    score = 0.0;
  }

  void set_Student(string a) { name = a; }

  void set_Student(string a, int b) {
    name = a;
    age = b;
  }

  void set_Student(string a, int b, float c) {
    name = a;
    age = b;
    score = c;
  }

  int get_age() { return age; }

  void print_age() { cout << "Age: " << get_age(); }*/

  /*  void set_name (string a){
        name = a;
    }
    void print_name ()
    {
      cout << name;
    }
  */
};

Student::Student(string a, int b, float c) { //Constructor
  name = a;
  age = b;
  score = c;
}

void Student::print_name() { cout << "Name: " << name << endl; }

void Student::set_name(string a) { name = a; }

void Student::set_age(int a) { age = a; }

int Student::get_age() { return age; }

void Student::print_age() { cout << "Age: " << get_age() << endl; }

void Student::set_Student(string a, int b, float c) {
  name = a;
  age = b;
  score = c;
}

void Student::print_all() {
  cout << "Name: " << name << endl;
  cout << "Age: " << get_age() << endl;
  cout << "Score: " << score << endl;
}
#endif