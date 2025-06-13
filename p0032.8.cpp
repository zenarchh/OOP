#include <iostream>
using namespace std;

struct Doctor {
    string name;
    string specialization;
};

struct Hospital {
    string name;
    Doctor doctors[3];
};

void inputHospitals(Hospital* hospitals, int n) 
{
  for (int i = 0; i < n; i++) 
    {
     cout << "\nEnter details for hospital " << i + 1 << ":" << endl;
     cout << "Name: ";
     cin.ignore();
     getline(cin, hospitals[i].name);
        
     for (int j = 0; j < 3; j++) 
      {
       cout << "\nEnter details for doctor " << j + 1 << " in " << hospitals[i].name << ":" << endl;
       cout << "Doctor Name: ";
       getline(cin, hospitals[i].doctors[j].name);
       cout << "Specialization: ";
       getline(cin, hospitals[i].doctors[j].specialization);
      }
    }
}

void displayHospitals(const Hospital* hospitals, int n) 
{
    cout << "\nHospital Details:" << endl;
    for (int i = 0; i < n; i++) 
     {
     cout << "\nHospital " << i + 1 << ":" << endl;
     cout << "Name: " << hospitals[i].name << endl;
        
      for (int j = 0; j < 3; j++) 
       {
      cout << "\tDoctor " << j + 1 << ": " << hospitals[i].doctors[j].name << " (" << hospitals[i].doctors[j].specialization << ")" << endl;
       }
    }
}

int main() 
{
    int n;
    cout << "Enter the number of hospitals: ";
    cin >> n;
    
    Hospital* hospitals = new Hospital[n];
    
    inputHospitals(hospitals, n);
    displayHospitals(hospitals, n);
    
    delete[] hospitals;
    return 0;
}

