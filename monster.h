#include <iostream>
#include <string>
using namespace std;
#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	monster(string= "boo", int=2,int=1);
	~monster();
	void Attack(monster &);
    void heal();
	void display();
	bool operator>(monster &x);
	void setHP(int h);
	int getHP();
};
	bool monster::operator>(monster &x){
		if(hp>x.hp)return true;
		else return false;

	}

	monster::~monster(){

	}
monster::monster(string na, int h, int p){
	name = na;
	hp = h;
	potion = p;
	cout <<"Monster "<<name<<" is here"<<endl;

}
void monster::display(){
	if(hp > 0){
	cout<<"Name: "<<name<<endl;
	cout<<"HP: "<<hp<<endl;
	cout<<"Potion: "<<potion<<endl;
	}
};
void monster::setHP(int h) {
    hp = h;
}

int monster::getHP() {
    return hp;
}
#endif
