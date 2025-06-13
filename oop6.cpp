#include <iostream>
using namespace std;
class emloyee{
 protected:
  string name;
   int id;
 
 public:
  employee(string n, int i){
   name = n;
   id = i;
  }
  
  virtual double getsalary(){}=0;
  virtual void getdetails(){}=0;
  virtual ~employee(){}
};

class manager: public employee{
 protected:
  double salary;
  string dep;
 
 public:
  manager(double s, string d):employee(name,id){
   salary = s;
   dep = d;
  }
  
 void getsalary() override{
  
 }
  


};
