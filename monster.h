#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
          void heal();
	monster(string= "boo", int=1,int=1);
	void display(){
	cout<<"Name: "<<name<<endl;
	cout<<"HP: "<<hp<<endl;
	cout<<"Potion: "<<potion<<endl;
	}
	~monster();	
};
	monster::~monster(){
		cout<<name<< " is gone."<<endl;

	}
monster::monster(string na, int h, int p){
	name = na;
	hp = h;
	potion = p;
	cout <<"Monster "<<name<<" is here"<<endl;

}
/*void display(){
	cout<<"Name: "<<name<<endl;
	cout<<"HP: "<<hp<<endl;
	cout<<"Potion: "<<potion<<endl;

};*/
#endif
