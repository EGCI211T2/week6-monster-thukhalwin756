#ifndef thanos_h
#define thanos_h
#include"monster.h"
class Thanos {
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	Thanos(int s=0,int h=1000); //stone hp
	~Thanos(){
	};
	void snap_finger(monster[], int size); 
	/* show all hps
	 clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
Thanos::Thanos(int s, int h){
    stones = s;
    hp = h;
}
void Thanos::snap_finger(monster m[], int size){
	if(stones==6){
		for (int i= 0; i<size/2; i++){
			m[i].setHP(0);
		}
	}
}
void Thanos::operator++(){
    if(stones < 6)
        stones++;
		cout<<"Number of stones: "<<stones<<endl;
}

#endif
