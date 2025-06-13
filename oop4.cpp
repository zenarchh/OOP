#include <iostream>
using namespace std;
class shape{
 protected:
  static int count;
 public:
  shape(){count++;}
  
  static int getcount(){
   return count;
  }  
};

class rectangle: public shape{
 protected:
  int length;
  int width;
 
 public:
  rectangle(){ }
  
  void setdim(int l, int w){
   length = l;
   width = w;
  }
  
  void display(){
   cout<<"length:"<<length<<endl;
   cout<<"width: "<<width<<endl;
  }
};

class circle: public shape{
 protected:
  int radius;
  
 public:
  circle(){}
  
  void setrad(int r){
   radius = r;
   }
  
  void display(){
   cout<<"radius of circle is :"<<radius<<endl;
  }
};

int shape::count=0;

int main(){
 rectangle r;
 circle c;
 r.setdim(2,3);
 r.display();
 cout<<endl;
 c.setrad(5);
 c.display();
 
 cout<<"total shapes: "<<shape::getcount();

 return 0;
}




