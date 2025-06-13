#include <iostream>
using namespace std;

class Engine{
public: 
 void createEngine(){
  cout<<"Engine is created!";
 }
 void destroyEngine(){
  cout<<"Engine is destroyed!";
 }
};

class car(){
private:
 Engine eng;
public:
 void carfunction(){
 eng.createEngine();
 cout<<"car is started!";
 eng.destroyEngine();
 cout<<"car is destroyed!";
}
};

int main(){
 car mycar;
 mycar.carfunction();
return 0;
}
