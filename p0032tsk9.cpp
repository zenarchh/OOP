#include <iostream>
using namespace std;

class CoffeeOrder{
public:
  void processOrder(int size, int price){
  cout<<"Total cost: $"<<(size * price)<<endl;
  }
};

class CustomOrder : public CoffeeOrder{
public:
  void processOrder(int size, int price){
  cout<<"Welcome to our Coffee Shop! Your order is being processed."<<endl;
  CoffeeOrder::processOrder(size, price);
  }
};

int main(){
  int size, price;
  cout<<"Enter drink size (in ounces): ";
  cin>>size;
  cout<<"Enter price per ounce: $";
  cin>>price;

  CoffeeOrder standardOrder;
  cout<<"\nStandard Order Process:"<<endl;
  standardOrder.processOrder(size, price);
  
  CustomOrder customOrder;
  cout<<"\nCustom Order Process:"<<endl;
  customOrder.processOrder(size, price);

return 0;
}

