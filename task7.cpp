#include <iostream>
using namespace std;

class Logger{
private:
 static const int max_size=100;
 static string logs[max_size];
 static int count;
 
public:
 void log(int size){
  cout<<"enter the messages: ";
  cin.ignore();
  for (int i=0; i<size; i++){
  getline(cin, logs[i]);
  }
  count+=size;
 }

 void printLog(int size){
  cout<<"\nStored logs: ";
  for (int i=0; i<size; i++)
  cout<<logs[i]<<endl;
 }
 
 int getLogCount(){
  return count;
 }
};
string Logger::logs[max_size];
int Logger::count=0;

int main()
{
 Logger lg;
 int size;
 cout<<"enter the number of messages: ";
 cin>>size;
 
 lg.log(size);
 lg.printLog(size);
 cout<<"the total number of logs is: "<<lg.getLogCount();
 
return 0;
}

