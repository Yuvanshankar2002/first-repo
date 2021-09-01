#include <iostream>
#include<cmath>
using namespace std;
class baseclass{

    public:
    int var_base;
    void display(){
        cout<<" Displaying base class variable varbase "<<var_base<<endl;
    }

};
class derivedclass:public baseclass{
    public:
    int var_derived;

    void display(){
        cout<<"Displaying base class variable var_base"<<var_base<<endl;
        cout<<"Displaying derived class variable var_derived"<<var_derived<<endl;
    }
};

 
int main(){
   baseclass *a;
   derivedclass b;
   derivedclass *c;
   a=&b;
   a->var_base=23;
   a->display();
   c=&b;
   c->var_derived   =24;
   c->display();


  
  return 0;

}

