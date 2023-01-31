#ifndef monster_h
#define monster_h

#include <iostream>
using namespace std;

class monster {
private:
  string name;
  int hp, potion, atk;

public:
  void attack(monster &);
  void heal();
void heal(monster &);
  monster();
  monster(string, int = 0, int = 0, int = 0);

  string get_name();
  int get_hp();
  int get_atk();
  int get_potion();

void change_hp(int);

  void print_monster();
  void set_monster(string, int, int, int);
~monster();
};

monster::monster(){
    cout << "Insert Monster Name: ";
    cin >> name;
    hp = 10;
    atk = 10;
    potion = 10;
}

monster::monster(string a, int b, int c, int d) { // Constructor
  name = a;
  hp = (b > 100 || b <= 0) ? b = 10 : hp = b;
  atk = (c > 50 || c<= 0) ? c = 10: atk = c;
  potion = (d > 25 || d<=0) ? d = 10: potion = d;
}

void monster::attack(monster &a) { 

  if(a.hp>0){
    a.hp = a.hp - this->atk;
  } else if(a.hp <= 0 ) {
  cout << a.name << " is already dead." << endl;
  }

  if(a.hp<=0){
    cout << a.name << " is dead." << endl;
  }

}

void monster::heal() { 
    
    if(this->hp <= 0){
        cout << "Can't heal" << endl;
    } else{
        this->hp = get_hp() + get_potion();
    }
    
}

void monster::heal(monster &a) { 

  if(a.hp <= 0){
        cout << "Can't heal" << endl;
    } else {
        a.hp = a.hp + this->potion;
    cout << this->name << " heal " << a.name << "!" << endl;
    }
    
}

string monster::get_name() { return name; }
int monster::get_hp() { return hp; }
int monster::get_atk() { return atk; }
int monster::get_potion() { return potion; }

void monster::change_hp(int a) {
  this->hp = a;
  }

void monster::set_monster(string a, int b, int c, int d) {
  name = a;
  hp = b;
  atk = c;
  potion = d;
}

void monster::print_monster() {
  cout << "Name: " << get_name() << endl;
  cout << "Life Point: " << get_hp() << endl;
  cout << "Attack Point: " << get_atk() << endl;
  cout << "Potion: " << get_potion() << endl;
  cout << endl;
}

monster::~monster(){
  cout<<"Monster: "<<name<<" is gone."<<endl;
}
#endif