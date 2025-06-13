#include <iostream>
using namespace std;

struct Book{
  
  string title;
  string author;
  float price;

};
int main()
{
 Book bk[5]={{"The Silent patient", "Alex Michaelides", 399.00},{"The Kite Runner","Khaled Hussaini", 479.00},{"Twisted Games","Ana Haung",531.99},{"Verity","Colleen Hoover",499.00},{"Reclaim Your Heart","Yasmin Mogahed",599.00}};
 for (int i=1; i<=5; i++)
 {
  if (bk[i].price>500.00)
   {
    cout<<"Book "<<i<<" details are: "<<"\nTitle: "<<bk[i].title<<"\nAuthor: "<<bk[i].author<<"\nPrice: "<<bk[i].price<<endl;
   }
 }
 
return 0;
}
