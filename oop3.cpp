#include <iostream>
using namespace std;

class student{
 private:
  string name;
  int rollno;
  static int count;
 public:
  student(string n, int r){
   name = n;
   rollno = r;
   count++;
  }
  
  static int getcount(){
   return count;
  }
  
  void display(){
   cout<<"Name: "<<name<<endl;
   cout<<"Roll Number: "<<rollno<<endl;
   
  }
};

int student::count=0;
//int student::getcount();

int main(){
 student st[3] ={ student("Ali",1001
),student("maha", 1020),student("meena",1031)};

 for (int i=0;i<3;i++){
  st[i].display();
  cout<<"-----------"<<endl;
 }
 cout<<"total students: "<<student::getcount();


 return 0;
}
