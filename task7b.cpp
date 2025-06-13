#include <iostream>
using namespace std;

class Car{
private:
 static int maxSpeed;
 int currentSpeed;
 
public:
 void setSpeed(int speed){
  currentSpeed = speed;
  if (currentSpeed>maxSpeed){
   maxSpeed=currentSpeed;
  } 
 }
 int getMaxSpeed(){
  return maxSpeed;
 }
};
 
int Car::maxSpeed=0;

int main()
{
 Car c1,c2,c3;
 c1.setSpeed(100);
 c2.setSpeed(40);
 c3.setSpeed(60);
 
 cout<<"Max Speed: "<<c1.getMaxSpeed();

return 0;
} 
