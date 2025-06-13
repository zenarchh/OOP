#include <iostream>
using namespace std;
 
class Book{
 private:
  string title;
 public:
  Book(string t){
   title = t;
   cout<<"book "<<title<<" created";
  }
  
  void show(){
   cout<<"- "<<title<<endl;
  }
  
  ~Book(){
   cout<<"book "<<title<<" is removed.";
  }
};

class Library{
 private: 
  int total_books = 4;
  Book books[4];
 public:
  Library(){
   cout<<"library is open.";
  }
  void display(){
   cout<<"library contains: ";
   for (int i=0;i<4;i++)
    {
     cout<<Book[i].show();
    }
  }
  
  ~Library(){
   cout<<"library is closed!";
  }
};

int main(){
 Library lib;
 lib.display();
return 0;
}
