#include <iostream>
using namespace std;

class Person{
protected:
 string name, address;
public:
 Person(string n, string a){
  name = n;
  address = a;
 }
 
 void setdata(string n, string a){
  name=n;
  address=a;
 }

 string getdata(){
  return {name,address};
 }

 void printDetails(){
  cout<<"Name: "<<name<<"\nAddress: "<<address<<endl;
 }
};

class Employee:public Person{
protected:
 int emp_no, hrs_worked;
public:
 Employee(string n, string a, int e, int h):Person(n,a),emp_no(e),hrs_worked(h){}
 
 void setdata(int e, int h){
  Person::setdata(n,a);
  emp_no=e;
  hrs_worked=h;
 }
 
 int getvalues(){
  Person::getdata()
  emp_no;
  hrs_worked;
 }
 
 void printDetails(){
  Person::printdetails();
  cout<<"Employee number: "<<emp_no<<"\nHours worked: "<<hrs_worked<<endl;
 }
};

class ProductionWorkers: public Employee{
protected:
 int shift;
 double hrly_pay;
 double salary;
 
public:
 ProductionWorkers(string n, string a, int e, int h,int sh, double hr, double s):Employee(n,a,e,h),shift(sh),hrly_pay(hr),salary(s){}

 void setdata(string n, string a, int e, int h,int sh, double hr, double s){
  Employee::setdata();
  shift=sh;
  hrly_pay=hr;
  salary=s;
 }
 
 int getdata(){
  return {shift, hrly_pay, salary};
 }
 
 double calculateSalary(double hrs, double pay){
  salary=hrs*pay;
  return salary;
 }
 
 void printDetails(){
  Employee::printDetails();
  cout<<"Shift: "<<shift<<"\nHourly pay: "<<hrly_pay<<"\nSalary: "<<salary<<endl;
 }
};

int main() {
  ProductionWorkers worker("Anohba Jehad", "Peshawar", 123, 40, 1, 15.5, 620);
  worker.printDetails();

  cout << "\nUpdating Salary after 45 hours of work...\n";
  double newSalary = worker.calculateSalary(45, 15.5);
  worker.setdata(worker.getdata()); 
  worker.printDetails();

return 0;
}





