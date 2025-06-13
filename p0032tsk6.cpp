#include <iostream>
using namespace std;

class Student{
 private:
 string name;
 int rollno;
 int marks[3];
 
 public:
 student(string n,int r,int m[3]){
  name=n;
  rollno=r;
  for (int i=0;i<3;i++)
  {
   marks[i]=m[i];
  }
 }
 
 void calculateAvg();
 void addStd();
 void display();

};

void Student::calculateAvg(int marks[][3]){
 int n; sum=0;
 float average;
 
 cout<<"enter the total number of students: ";
 cin>>n;
 
 int marks[n][3];
 cout<<"enter the marks of each student:";
 for (int i=0;i<n;i++)
 {
  for (int j=0;j<3;j++)
  {
   cin>>marks[i][j];
  }
 }
 
 cout<<"average of each student\n";
 for (int i=0;i<n;i++)
 {
  for (int j=0;j<3;j++)
  {
   sum+=marks[i][j];
  }
  average=sum/3;
  cout<<"Student "<<i+1<<" Average: "<<average;
  sum=0;
 }

}

void Student::addStd(string name,int rollno,int marks[3]){
 this->name=name;
 this->rollno=rollno;
 for(int i=0; i<3; i++)
 {
  this->marks[i]=marks[i];
 }
}

void Student::display(){
 

}











