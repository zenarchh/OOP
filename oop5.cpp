#include <iostream>
using namespace std;

class calculator{
 public:
  
  virtual void add(){}
  virtual ~calculator(){};
};

class two: public calculator{
 protected:
  int x,y;
 public: 
  void setvalues(int i,int j){
   x=i;
   y=j;
  }
 
 void add() override{
  int add;
  add=x+y;
 cout<<"Addition of two integers is: "<<add;
 }
};
 
class three: public calculator{
 protected: 
  int a,b,c;
  
 public: 
  void setvalues(int i,int j,int k){
   a=i; b=j; c=k;
  }

 void add() override{
  int add;
  add=a+b+c;
 cout<<"Addition of three integers is: "<<add;
 }
 
};

class four: public calculator{
 protected:
  float a, b;
 
 public:
  void setvalues(float m, float n){
   a=m;
   b=n;
  }

 void add() override{
  float add;
  add=a+b;
  cout<<"Addition of two float values is: "<<add;
 }
 
};

int main(){
 two obj1;
 three obj2;
 four obj3;
 
 obj1.setvalues(2,5);
 obj2.setvalues(2,5,7);
 obj3.setvalues(6.9,4.1);
 
 calculator *cal[2];
 cal[0]=&obj1;
 cal[1]=&obj2;
 cal[2]=&obj3;

 cal[0]->add();
 cout<<"\n-----"<<endl;
 cal[1]->add();
 cout<<"\n-----"<<endl;
 cal[2]->add();
 return 0;
}





