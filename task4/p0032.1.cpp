#include <iostream>
using namespace std;

struct Rectangle{

 int length;
 int width;

};

int calculateArea(Rectangle &r)
{
 int area;
 area = r.length * r.width;
 return area;
}

int main()
{
 Rectangle rec;
 cout<<"enter length and width of rectangle: ";
 cin>>rec.length>>rec.width;
 cout<<"the area of rectangle is: ";
 cout<<calculateArea(rec);
 
return 0;
}
