#include <iomanip>
#include <iostream>
using namespace std;
class node {
private:
  int value;
  string name;
  node *next;

public:
  node(int x = 0, string n = " ");
  ~node();
  node *get_next() { return next; }
  void set_next(node *t) { next = t; }
  void print() { cout << setw(5) << value << name; }
};
typedef node *nodePtr;

node::node(int x, string n) {
  name = n;
  value = x;
  next = NULL;
}

node::~node() { cout << value << name << " deleted" << endl; }