#ifndef thanos_h
#define thanos_h

#include <iostream>
using namespace std;
#include "monster.h"

class Thanos{
private:
int hp, stone;

public:
void snap_finger(monster[],int);
void operator++();
Thanos(int = 1000, int = 0);
~Thanos();
};

Thanos::Thanos(int a, int b){
  a = hp;
  b = stone;
}

Thanos::~Thanos(){
  cout << "Thanos is gone." << endl;
}


void Thanos::snap_finger(monster a[], int n){
    
  int i;
  
  if(stone == 6){
    for(i = 0; i < n; i+=2){
      a[i].change_hp(0);
    }
  } else if(stone<6){
    cout << "Not Enough Stone" << endl;
  }
  
}

void Thanos::operator++(){
  stone++;
}

#endif