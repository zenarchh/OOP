#include <iostream>
using namespace std;

class Encryptor;

class Message{
 private: 
  string key;
  string private_text;
  
 public:
  Message(string k, string p): key(k), private_text(p){};
  
  void show(){
   cout<<"The private data is: ";
   cout<<"Key: "<<key<<" Texts: "<<private_text;
  }
  
 friend class Encryptor; 
  
 ~Message(){}; 
};

class Encryptor{
 public:
  Encryptor(){
   cout<<"The data is encrypted.";
  }
  
  void display(Message& m){
   cout<<"the accessed data is: "<<msg.show();
  }
  
  ~Encryptor(){};
};

int main(){
 Message msg(3369, "This is a pivate text!");
 Encryptor en;
 en.display(msg);
 
return 0;
}






