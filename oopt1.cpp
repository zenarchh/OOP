#include <iostream>
using namespace std;
struct car
{
 string model;
 int year;
 double price;
};
int main()
{
 int n;
 cout<<"enter the number of cars: "; 
 cin>>n;
 car array[n];
 for (int i=0;i<n;i++)
 {
  cout<<"enter the model, year, price for car"<<i+1<<":";
  cin>>array[i].model>>array[i].year>>array[i].price;
 }
  
  bool found = false;
  
 for (int i=0;i<n;i++)
  {
   if(array[i].price>50000)
   {
    cout<<"car "<<i+1<<":"<<array[i].model<<" "<<array[i].year<<" "<<array[i].price;
   found = true;
   }
  } 
  if(!found)
   {
   cout<<"no cars have price greater than 50000"<<endl;
    }
return 0;
}
