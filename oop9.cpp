#include <iostream>
using namespace std;
class Animal{
 protected:
  string name;
  int age;
  string gender;
  
 public:
  Animal(string n, int a, string g): name(n), age(a), gender(g){}
  
  string getname(){
   return name;
  }

 int getage(){
  return age;
 }
 
 string getgender(){
  return gender;
 }
 
 virtual void makesound()=0;
 
 virtual void display(){
  cout<<"Name: "<<name<<endl;
  cout<<"age: "<<age<<endl;
  cout<<"gender: "<<gender<<endl;
 }
 
 virtual ~Animal(){}
 
};

class Bird: public Animal{
protected:
 string color;
 
public: 
 Bird(string n, int a, string g, string c): Animal(n,a,g){
  color = c;
 }

 void makesound() override{
  cout<<"bird makes oink oink sound!"<<endl;
 }
 
 void display(){
  Animal::display();
   cout<<"animal type is bird!"<<endl;
 cout<<"color is: "<<color<<endl;
 }
 
};

class Mammal: public Animal{
 protected:
  float weight;
 
 public:
  Mammal(string n, int a, string g, float w): Animal(n,a,g){
   weight = w;
  }

 void makesound() override{
  cout<<"mammal makes woof woof sound!"<<endl;
 }

void display(){
  Animal::display();
   cout<<"animal type is Mammal!"<<endl;
 cout<<"Weight is: "<<weight<<endl;
 }

};

class Reptiles: public Animal{
 protected:
  float length;
 
 public:
  Reptiles(string n, int a, string g, float l): Animal(n,a,g){
 length = l;
 }
 
  void makesound() override{
  cout<<"Reptile makes hsss hsss sound!"<<endl;
 }
 
 void display(){
  Animal::display();
   cout<<"animal type is Reptiles!"<<endl;
 cout<<"Length is: "<<length<<endl;
 }

};

class zookeeper{
 private:
  string type;
  string name;
  int age;
  string gender;
  
 public:
  zookeeper(string t, string n, int a, string g){
   type = t;
   name = n;
   age = a;
   gender = g;
  }

  string gettype() const{return type;}

  string getname(){return name;}

  int getage(){ return age;}

  string getgender(){return gender;}
  
  void feedanimal(animal& animal){}
  
};

class Enclosure{
 protected:
  string entype;
  int capacity;
  Animal *animal[3];
  zookeeper *zookeep;
 
 public:
  Enclosure(string e, int c, Animal *a, zookeeper *z){
   entype = e;
   capacity = c;
  }
  
  string getentype(){return entype;}
  
  int getcapacty(){return capacity;}
  
  
  
  
};

int main(){

 




 return 0;
}







