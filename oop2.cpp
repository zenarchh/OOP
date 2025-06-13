#include <iostream>
using namespace std;
 
class Device{
 protected:
  string deviceName;
  bool powerStatus;
  string location;
  
 public:
 Device(string d, bool p, string l){
  deviceName = d;
  powerStatus = p;
  location = l;
 }
 
 bool turnOn(){
   if (!powerStatus){
   powerStatus= true;
   cout<<deviceName<<" is turned On"<<endl;
  }
 else {
  cout<<deviceName<<" is already On"<<endl;
 }
  return powerStatus;
 }
 
 bool turnOff(){
  if (powerStatus){
   powerStatus= false;
   cout<<deviceName<<" is turned off"<<endl;
  }
 else {
  cout<<deviceName<<" is already off"<<endl;
 }
  return powerStatus;
 }
 
 void showStatus(){
  cout<<"Device"<<deviceName<<endl;
  cout<<"Location: "<<location<<endl;
  cout<<"Power Status: "<<powerStatus<<endl;
 }
};

class smartLight: public Device{
 protected:
  int brightness;
  string color;
 
 public:
  smartLight(int b, string c): Device(deviceName, powerStatus, location){
   brightness = b;
   color = c;
  }
 
  void adjustBrightness(int level){
   brightness = level;
  }
 
 void changeColor(string c){
  color = c;
 }
};

class thermostat: public Device{
 protected:
  float temp;
  string mode;
  
 public:
  thermostat(float t, string m):Device(deviceName, powerStatus, location){
   temp = t;
   mode = m;
  }
 
  void settemp(float t){
   temp = t;
  }
  
  void switchmode(string m){
   mode = m;
  }
};

class smartCamera: public Device{
 protected:
  string resolution;
  bool recordStatus;
  
 public:
  smartCamera(string r, bool s):Device(deviceName, powerStatus, location){
   resolution = r;
   recordStatus = s;
  }
 
  bool startRecording(){
   if (!recordStatus)
   {
    recordStatus = true;
    cout<<"Recording Starts";
   }
    return recordStatus;
  }

  bool stopRecording(){
   if (recordStatus)
   {
    recordStatus = false;
    cout<<"Recording Stops";
   }
   return recordStatus;
  }

 void viewFeed(){
  cout<<"started Live";
 }
};

int main(){
 Device d("Thermostat", true, "Bedroom");
 smartLight s(10, "green");
 thermostat t(20, "cool");
 smartCamera c("360p", true);
 
 s.adjustBrightness(37);
 s.changeColor("blue");
 s.showStatus();
 
 return 0;
}









