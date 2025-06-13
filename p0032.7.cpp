#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
    float price;
};

void updatePrice(Car* c, float discount) 
{
 c->price -= c->price * (discount / 100);
}

int main()
{
  Car car;
  float discount;
    
  cout << "Enter car details:" << endl;
  cout << "Brand: ";
  cin >> car.brand;
  cout << "Year: ";
  cin >> car.year;
  cout << "Price: ";
  cin >> car.price;
    
  cout << "Enter discount percentage: ";
  cin >> discount;
    
  updatePrice(&car, discount);
    
  cout << "\nUpdated Car Details:" << endl;
  cout << "Brand: " << car.brand << endl;
  cout << "Year: " << car.year << endl;
  cout << "Price after discount: " << car.price << endl;
    
    return 0;
}
