#include <iostream>
using namespace std;

class Width;

class Length{
 private: 
  int len;
 
 public:
 Length(int l): len(l){};
 
 int getlength(len){
  return len;
 }
 
 friend int calculateArea(Length,Width);
 
 ~Length(){};
};

class Width{
 private:
  int wid;
  
 public:
  Width(int w):wid(w){};
  
  int getwidth(wid){
   return wid;
  }
  
  friend int calculateArea(Length,Width);
  
  ~Width(){}; 
};

int calculateArea(l,w){
 int area;
 area = l*w;
 return area;
}

int main(){
 Length ln(3);
 Width wi(4);
 cout<<"Area is: "<<calculateArea(ln,wi);
return 0;
}







