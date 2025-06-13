#include <iostream>
using namespace std;
class CoffeeOrder{
 protected:
  int size;
  int price;
  
 public:
  CoffeeOrder(int z, int p): size(z),price(p){}
  int processOrder(int s, int pr){
   int cost;
   cost = s*pr;
   cout<<"Total cost is:$ "<<cost<<endl;
   return cost;
  }
};

class customOrder:public CoffeeOrder{
 public:
  customOrder(int siz, int pri): CoffeeOrder(siz,pri){}
  int processOrder(){
   cout<<"Welcome to our Coffee Shop!";
  return CoffeeOrder::processOrder(size, price);
  }
};

int main(){
 customOrder obj1(30,160);
 CoffeeOrder obj2(20,120);
  obj1.processOrder();
  obj2.processOrder(20,120);
  return 0;
  }
  
