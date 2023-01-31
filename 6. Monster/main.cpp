#include "monster.h"
#include "thanos.h"
#include <iostream>
using namespace std;

int main() {

  /*monster x("Gent", 20, 12, 13), y("Peter", 21, 15, 16); Fuck Jawit

  x.print_monster();
  y.print_monster();

  x.attack(y);

  x.print_monster();
  y.print_monster();

  y.heal();

  x.heal(y);
  
  monster x_gang[10];

  monster *p = new monster("Teng");
  
  delete p;*/

  int n,i;
  
  cout<<"How Many Monsters: ";
  cin>>n;

  Thanos t;

  monster *p = new monster[n];
  
  for(i = 0; i<n; i++){
      p[i].print_monster();
  }

  ++t;

  t.snap_finger(p,n);

  ++t;

  t.snap_finger(p,n);

  ++t;

  t.snap_finger(p,n);

  ++t;

  t.snap_finger(p,n);

  ++t;

  t.snap_finger(p,n);

  ++t;
  
  t.snap_finger(p,n);
  
  for(i = 0; i<n; i++){
      p[i].print_monster();
  }

  delete []p;

  return 0;
}