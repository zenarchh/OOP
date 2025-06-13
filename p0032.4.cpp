#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main()
{
 int n;
 cout << "Enter the number of students: ";
 cin >> n;

 Student* students = new Student[n];

  for (int i = 0; i < n; i++)
   {
    cout << "\nEnter details for student " << i + 1 << ":" << endl;
    cout << "Name: ";
    cin.ignore(); 
    getline(cin, students[i].name);
    cout << "Roll Number: ";
    cin >> students[i].rollNo;
    cout << "Marks: ";
    cin >> students[i].marks;
   }

 cout << "\nStudent Details:" << endl;
 
  for (int i = 0; i < n; i++) 
  {
   cout << "\nStudent " << i + 1 << ":" << endl;
   cout << "Name: " << students[i].name << endl;
   cout << "Roll Number: " << students[i].rollNo << endl;
   cout << "Marks: " << students[i].marks << endl;
  }

  delete[] students;

return 0;
}

