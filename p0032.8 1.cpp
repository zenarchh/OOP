# include <iostream>
using namespace std;

struct Book{

 string title;
 string author;
 int pages;
 float price;

};

int main()
{
 Book details;
 cout<<"enter the details of book: ";
 cin>>details.title;
 cin>>details.author;
 cin>>details.pages;
 cin>>details.price;
 
 cout<<"\ntitle: "<<details.title<<"\nauthor: "<<details.author<<"\npages: "<<details.pages<<"\nprice: "<<details.price<<endl;

return 0;
}
