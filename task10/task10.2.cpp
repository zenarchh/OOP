#include <iostream>
using namespace std;

class PointB;

class PointA{
 private:
  int x_axis;
 
 public:
  PointA(int x): x_axis(x){};
  
  friend int calculateDistance(PointA, PointB);
  
};

class PointB{
 private:
  int y_axis;
 
 public:
  PointA(int y): y_axis(y){};
  
   friend int calculateDistance(PointA, PointB);
   
};

int calculateDistance(PointA a, PointB b){
 int distance = b-a;
 return distance;
}

int main(){
 PointA a(2);
 PointB b(4);
 cout<<"The distance between two points is: "<<calculateDistance(PointA a, PointB b);

return 0;
}



