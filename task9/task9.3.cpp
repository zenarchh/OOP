#include <iostream>
using namespace std;

class Address{
 private:
  string city;
  string town;
  int street_no;
  int house_no;
 
 public:
  Address(string c, string t, int s, int h) : city(c), town(t), street_no(s),house_no(h) {}
  
 void display(){
  cout<<"The Address is: ";
   cout<<city<<" ,"<<town<<" ,"<<street_no<<" ,"<<house_no<<endl;
 }
};

class Student{
 private: 
  Address *address;
  string name;
  int id;
 public:
  Student(string n, int i, Address *address): id(i), name(n),address(address){}
   
  void display(){
   cout<<"Name: "<<name<<" id: "<<id;
   address->display();
  }
};

int main(){
 Address a("Peshawar", "Hayatabad", 12, 406);
 Student st("Ali",0016, &a);
 st.display();

return 0;
}










