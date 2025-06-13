#include <iostream>
using namespace std;


//interface class
class paymentMethod{
public: 
 virtual void creditCard()=0;
 virtual void payPal()=0;
 virtual void bankTransfer()=0;
 
 virtual ~paymentMethod(){}
};

//implementation of paymentMethod
class CreditCardPayment: public paymentMethod{
 public: 
   void creditCard() override{
    cout<<"payment is done through credit card!"<<endl;
   }
   
   void payPal() override{
    cout<<"payment is done through payPal!"<<endl;
   }
   
   void bankTransfer() override{
    cout<<"payment is done through Bank Transfer!"<<endl;
   }

};

//abstract user class 
class User{
 protected:
  string name;
  string email;
  double wallet_balance;
  
 public: 
  User(string n, string e, double w): name(n),email(e),wallet_balance(w){}
  
  void addMoney(double amount){
   wallet_balance+=amount;
   cout<<"Wallet balance after adding money: "<<wallet_balance<<endl;
  }

  virtual void displayProfile()=0;

  virtual ~User(){}
  
};

//buyer class
class Buyer:public User,public paymentMethod{
 private: 
  string product;
  int quantity;
  float total_price;
  
 public:
  Buyer(string n, string e, double w, string p,int q, float t):User(n,e,w){
   product = p;
   quantity = q;
   total_price = t;

  }
   
  void creditCard() override{
    cout<<"buyer's payment is done through credit card!"<<endl;
   }
   
   void payPal() override{
    cout<<"buyers' payment is done through payPal!"<<endl;
   }
   
   void bankTransfer() override{
    cout<<"buyers' payment is done through Bank Transfer!"<<endl;
   }
 
  void displayProfile() override{
   cout<<"Name: "<<name<<endl;
   cout<<"Email: "<<email<<endl;
   cout<<"Wallet Balnce: $"<<wallet_balance<<endl;
   cout<<"---------------"<<endl;
   cout<<"Purchase History"<<endl;
   cout<<"Product Purchased: "<<product<<endl;
   cout<<"Quantity of product: "<<quantity<<endl;
   cout<<"total price: "<<total_price<<endl;
   cout<<"----------------"<<endl;
  }

};

//seller class
class Seller:public User{
 private:
  string product_name;
  int quantity_sold;
  int buyer_id;
  
  
 public:
  Seller(string n, string e, double w, string p, int qs, int b):User(n,e,w){
   product_name = n;
   quantity_sold = qs;
   buyer_id = b;
  }
  
  void displayProfile() override{
   cout<<"Name: "<<name<<endl;
   cout<<"Email: "<<email<<endl;
   cout<<"Wallet Balnce: $"<<wallet_balance<<endl;
   cout<<"--------------"<<endl;
   cout<<"Sales History"<<endl;
   cout<<"Product Name: "<<product_name<<endl;
   cout<<"Quantity Sold: "<<quantity_sold<<endl;
   cout<<"Buyer ID: "<<buyer_id<<endl;
   cout<<"-------------"<<endl;
   
  }
  
};

int main(){

 Buyer b("Aisha", "aisha@gmail.com", 9000, "shirts",3,6000);
 
 Seller s("Zargham", "zargham@gmail.com", 4000, "caps", 4,1002);
 
 b.displayProfile();
 s.displayProfile();
 
 b.creditCard();   //testing interface implementation
 b.bankTransfer();
 b.payPal();
 
 cout<<"------------"<<endl;
 cout<<"Buyers' wallet"<<endl;
 b.addMoney(3000); //adding money to wallet
 cout<<"Sellers' wallet"<<endl;
 s.addMoney(2000);
 
 
 return 0;
}








