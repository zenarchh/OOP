#include <iostream>
using namespace std;

class Employee{
 protected:
  string name;
  char gender;
  int id;
  
 public: 
  Employee(string n, char g,int i){
   name = n;
   gender = g;
   id = i;
  }
  
  virtual void bonus(){
   cout<<"Base bonus calculation for employee; "<<endl;
  }
  
  void display(){
   cout<<"Name: "<<name<<endl;
   cout<<"gender: "<<gender<<endl;
   cout<<"Employee ID: "<<id<<endl;
  }
  
  virtual ~Employee(){}
};

class Manager: public Employee{
 protected:
  float bonus_percent;
  double salary;
 
 public:
  Manager(string n, char g, int i, double s, float b): Employee(n,g,i){
   salary = s;
   bonus_percent = b;
  }  
 
 void bonus() override{
  double bonus;
  bonus = salary*bonus_percent;
  cout<<"Manager Bonus: "<<bonus<<endl;
 }

 void display(){
  Employee::display();
  cout<<"manager Details: "<<endl;
  cout<<"Manager Salary: "<<salary<<endl;
 }
};


class Engine{
 public: 
  Engine(){
   cout<<"Engine created!"<<endl;
  }
  
  ~Engine(){
   cout<<"Engine is destroyed!"<<endl;
  }
};

class Car{
 private:
  Engine engine;
  
 public:
  Car(){
   cout<<"car exists with engine"<<endl;
  }
  
  ~Car(){
    cout<<"car destroyed!"<<endl;
   }

};

class Engineer:public Employee{
 protected:
  string specialization;
  double e_salary;
  float b_percent;
  Car *car;
  
 public: 
  Engineer(string n, char g, int i, string s,double e,float b,Car *c):Employee(n,g,i){
   specialization = s;
   e_salary = e;
   b_percent = b;
   car = c;
  } 
  
  void bonus() override{
   float bonus;
   bonus = e_salary*b_percent;
   cout<<bonus;
  }
 
 void display(){
  cout<<"Engineer Details: "<<endl;
  Employee::display();
  cout<<"Engineer Salary: "<<e_salary<<endl;
  cout<<"Engineer has a car"<<endl;
 }

};

class Department{
 private:
  Employee *employee;
  string dep_name;
  
 public: 
  Department(Employee *e, string d){
   employee = e;
   dep_name = d;
  }
  
  void display(){
   cout<<"Department name: "<<dep_name<<endl;
   employee->display();
  }
  
};


int main(){

  Employee *emp1 = new Employee("Ali", 'M',1001);
  Employee *emp2 = new Employee("maha", 'F', 1002);

  Car mycar;

  Manager m1("Hashir", 'M', 1003,6000.0, 20.0);
  Engineer en("Aisha", 'F', 1004, "software", 5000, 10, &mycar);
  Department dep(emp1, "finance");
 

 
  m1.display();
  m1.bonus();
 
  en.display();
  en.bonus();

  dep.display();
 
  delete emp1;
  delete emp2;


 return 0;
}




