#include "node.h"
#include <iostream>
using namespace std;

class LL {
  nodePtr hol; // head of linked list
  int size;

public:
  LL();
  void insert_node(int,string);
  void print_all();
  ~LL();
};
LL::LL() {
  hol = NULL;
  size = 0;
}

void LL::insert_node(int x, string n) {
  nodePtr t = hol;
  // search for location
  if (hol == NULL) {
    hol = new node(x,n);
    t = hol;
  } else {
    // t =t->next
    while (t->get_next())
      t = t->get_next();
    t->set_next(new node(x,n));
  }
  size++;
}

void LL::print_all() {
  nodePtr t;
  for (t = hol; t; t=t->get_next()) {
    t->print();
  }
}

LL::~LL() {
  cout << endl;
  nodePtr t;
  t = hol;
  int i;
  for (i = 0; i < size; i++) {
    /* delete all nodes*/
    hol = hol->get_next();
    delete (t);
    t = hol;
  }
}