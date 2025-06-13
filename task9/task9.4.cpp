#include <iostream>
using namespace std;

class Employee{
 private: 
  string name;
  int id;
  
 public:
  Employee(string n, int i): name(n), id(i){};
  
  void display(){
   cout<<"Employee Details: " <<endl;
   cout<<"Name: "<<name<<" ID: "<<id;
  } 
};

class Department{
 private: 
  Employee *employee;
  string dep_name;
 
 public:
  Department(string dn,Employee *employee): dep_name(dn), employee(employee) {};
  
  void display(){
   employee->display();
   cout<<"Department name: "<<dep_name;
  } 
};

int main(){
 Employee emp("Mariam", 0067);
 Department dep("Finance", &emp);
 dep.display();
return 0;
}








