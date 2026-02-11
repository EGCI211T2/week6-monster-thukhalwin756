#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A("Rex", 10, 2);
    monster B("Lulu", 7, 3);
    monster x[5] = {{"James"},{"Pupu",22},{"Galone"},{"Malofe"},{"Bonskee"}};
    monster c;
    monster*p;
    p=&c;
    p->display();
    p=&A;
    p->display();
    p=new monster("Mable",23);
    p->display();
    delete p;

    p= new monster[3];
    delete []p;
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
