#include <iostream>
using namespace std;
#include "thanos.h"
#include "monster.h"

int main() {

  Thanos T;
  int n;
  cout<<"There was a breach at the bottom of the ocean and monsters started emerging from it. Not wanting to share control over earth, Thanos collects stones and snap them away"<<endl;
  cout<<"How many monsters?";
  cin>>n;

  monster *m=new monster[n]; //make sure they have hp
 
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);
    ++T;
  ++T;
  T.snap_finger(m,n);//Clear hp n/2(half) of the monster. 

  int i;
  for(i=0;i<n;i++)
      m[i].display();// If the hp=0, you do not display"" -->you will see only n/2 monster
  

  delete [] m;

}

