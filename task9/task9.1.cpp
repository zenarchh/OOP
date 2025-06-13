#include <iostream>
using namespace std;

class Bank{
private: 
 double balance;
public:
 friend void displayBalance(Bank, Account);
 void getbalance(double b){
  balance = b;
 }
};

class Account{
public:
 friend void displayBalance(Bank, Account);
};

void displayDisplay(Bank b, Account a){
 cout<<"balance: "<<b.balance<<endl;
}

int main()
{ 
 Bank b;
 b.getbalance(20,000);
 Account a;
 a.displayBalance();
return 0;
}
