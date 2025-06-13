#include <iostream>
using namespace std;

class Force;

class Particle{
 private:
  float velocity;
  float acceleration;
 public:
  Particle(float v, float a): velocity(v), acceleration(a) {};
  
  void dislay(){
   cout<<"Particle Values: ";
   cout<<"Velocity: "<<velocity<<"m/s"<<" Acceleration: "<<"m/s2"<<acceleration;
  }
  
 ~Particle(){};
 
 friend class Force;
};

class Force{
 private:
  float mass;
  float appliedForce;

 public:
  Force(float m, float a): mass(m), appliedForce(a){};
  
  void calculations(Particle& p){
   if (mass!=0)
   {
    p.acceleration = appliedForce/mass;
    p.velocity += p.acceleration;
   } 
  }
  ~Force(){};
};

int main(){
 Particle pr(2.0, 1.5);
 Force f(35, 4.2);
 cout<<"before applying force: "<<pr.display();
 f.calculations(pr);
 cout<<"\nafter applying force: "<<f.dis;
 pr.display();
 
return 0;
} 




