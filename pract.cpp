#include <iostream>
using namespace std;

class Flight{
protected:

 int flight_no;
 string dep_airport, arr_airport, dep_time, arr_time, airline;

public:

 Flight(int n, string d, string ar, string dt, string at, string a){
  flight_no=n;
  dep_airport=d;
  arr_airport=ar;
  dep_time=dt;
  arr_time=at;
  airline=a;
  cout<<"\nConstructor of class Flight is called";
  
 }

 /* void getdata(int n, string d, string ar, string dt, string at, string a){
  flight_no=n;
  dep_airport=d;
  arr_airport=ar;
  dep_time=dt;
  arr_time=at;
  airline=a;
 }
*/

 void display(){
  cout<<"Flight details: ";
  cout<<"\nflight number: "<<flight_no;
  cout<<"\ndeparture airport: "<<dep_airport;
  cout<<"\narrival airport: "<<arr_airport;
  cout<<"\ndeparture time: "<<dep_time;
  cout<<"\narrival times: "<<arr_time;
  cout<<"\nairline information: "<<airline;
 }
 
 ~Flight(){
  cout<<"Destructor of class Flight is called";
 }
};

class Standard:public Flight{
protected:

 string seat_type, meal_service, lounge_access;
 
public:

 Standard(string st,string ms, string la):Flight(n, d, ar, dt, at, a){
  seat_type=st;
  meal_service=ms;
  lounge_access=la;
  cout<<"\nConstructor of class Standard is called";
 }

 /*void getdata(string st,string ms, string la){
  seat_type=st;
  meal_service=ms;
  lounge_access=la;
 }*/
 
 void displayDetails(){
  Flight::display();
 }
 
 
 ~Standard(){
   cout<<"Destructor of Standard class is called.";
 }
};

class Luxury:public Flight{
protected:

 string vip_lounge, chauffeur_service, private_suite;

public:

 Luxury(string vl, string cs, string ps):Flight(n, d, ar, dt, at, a){
   vip_lounge=vl;
   chauffeur_service=cs;
   private_suite=ps;
  cout<<"\nConstructor of class Luxury is called";
 }
 
 void displayDetails(){
   Flight::display();
   cout << "VIP Lounge: " << vip_lounge
   cout << "\nChauffeur Service: " << chauffeur_service
   cout << "\nPrivate Suite: " << private_suite << "\n";
 }
 
 ~Luxury(){
   cout<<"default destructor of class Luxury is called";
 }
};

class Premium:public Flight{
protected:

 string extra_legroom, priority_boarding, gourmet_meals;
 
public:

 Premium(string el, string pb, string gm):Flight(n, d, ar, dt, at, a){
  extra_legroom=el;
  priority_boarding=pb;
  gourmet_meals=gm;
  cout<<"\nConstructor of class Premium is called";
 }
 
 void displayDetails(){
  Flight::display();
  cout << "Extra Legroom: " << extra_legroom;
  cout << "\nPriority Boarding: " << priority_boarding
  cout << "\nGourmet Meals: " << gourmet_meals << "\n";
 }
 
 ~Premium(){
   cout<<"Destructor of class Premium is called";
 }
};

int main()
{

 cout << "\nCreating Standard Flight: ";
 Standard s(101, "JFK", "LHR", "10:00 AM", "8:00 PM", "British Airways", "Economy", "Included", "No");
 s.displayDetails();
 
 cout << "\nCreating Luxury Flight: ";
 Luxury l(102, "LAX", "DXB", "5:00 PM", "8:00 AM", "Emirates", "Yes", "Yes", "Yes");
 l.displayDetails();
 
 cout << "\nCreating Premium Flight: ";
 Premium p(103, "ORD", "CDG", "7:00 AM", "11:00 PM", "Air France", "Yes", "Yes", "Yes");
 p.displayDetails();
 

return 0;
}



