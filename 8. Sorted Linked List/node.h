// self-referential structure
#include <iomanip>
#include <iostream>
using namespace std;
class Node {
private:
  int value;
  Node *nextPtr;
  Node *pPtr; // for doubly linked list
public:
  Node(int x = 0);
  ~Node();
  Node *get_next();
  Node *get_prev();
  void set_next(Node *t);
  void set_prev(Node *t);
  void print();
  int get_data() { return value; }
};

typedef Node *NodePtr; // synonym for Node*

Node::Node(int x) {
  pPtr = NULL;
  value = x;
  nextPtr = NULL;
}

Node::~Node() { cout << value << " deleted" << endl; }

NodePtr Node::get_next() { return nextPtr; }

NodePtr Node::get_prev() { return pPtr; }

void Node::set_prev(NodePtr t) { pPtr = t; }

void Node::set_next(NodePtr t) { nextPtr = t; }

void Node::print() { cout << setw(3) << value; }
