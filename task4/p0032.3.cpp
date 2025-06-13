#include <iostream>
using namespace std;

struct Employee{

 string name;
 int ID;
 long salary;

};
int main()
{
 Employee emp,*emp1;
 emp.name = "Aisha";
 emp.ID = 123;
 emp.salary = 50000; 
 
 emp1=&emp;
 cout<<"";

return 0;
}
