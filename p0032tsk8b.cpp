#include <iostream>
using namespace std;

class Device {
protected:
  string deviceName;
  bool powerStatus;
  string location;

public:
  Device(string name, string loc) : deviceName(name), location(loc), powerStatus(false) {}

  void turnOn(){
    powerStatus = true;
    cout<< deviceName << " is now ON." << endl;
  }

  void turnOff(){
    powerStatus = false;
    cout<< deviceName << " is now OFF." << endl;
  }

  void showStatus(){
   cout<< "Device: " <<deviceName<< " | Location: " <<location<< " | Power: " << (powerStatus ? "ON" : "OFF") <<endl;
   }
};

class SmartLight : public Device{
private:
  int brightness;
  string color;

public:
  SmartLight(string name, string loc) : Device(name, loc), brightness(100), color("White") {}

  void adjustBrightness(int level){
    if (level >= 0 && level <= 100) {
     brightness = level;
     cout<<deviceName<< " brightness set to " << brightness << "%" <<endl;
        } 
        else{
         cout<< "Invalid brightness level." <<endl;
        }
    }

  void changeColor(string newColor){
    color = newColor;
     cout<< deviceName<< " color changed to " <<color<<endl;
    }
};

class SmartThermostat : public Device{
private:
  float temperature;
  string mode;

public:
  SmartThermostat(string name, string loc) : Device(name, loc), temperature(22.0), mode("Auto") {}

  void setTemperature(float temp){
    temperature = temp;
    cout<<deviceName<< " temperature set to " <<temperature<< "C" <<endl;
    if (temperature < 18.0){
       switchMode("Heat");
       }
 }

  void switchMode(string newMode){
    mode = newMode;
    cout<<deviceName<< " mode switched to " <<mode<<endl;
    }
};

class SmartSecurityCamera : public Device{
private:
  string resolution;
  bool recordingStatus;

public:
   SmartSecurityCamera(string name, string loc, string res) : Device(name, loc),resolution(res),recordingStatus(false) {}

  void startRecording(){
    recordingStatus = true;
    cout<<deviceName<< " recording started." <<endl;
  }

  void stopRecording(){
    recordingStatus = false;
    cout<<deviceName<< " recording stopped." <<endl;
  }

  void viewFeed(){
    cout<< "Live feed from " <<deviceName<< " at " <<resolution<< " resolution." <<endl;
    }
};

int main(){
    SmartLight bedroomLight("Bedroom Light", "Bedroom");
    bedroomLight.turnOn();
    bedroomLight.adjustBrightness(50);
    bedroomLight.changeColor("Blue");
    bedroomLight.showStatus();

    SmartThermostat homeThermostat("Home Thermostat", "Living Room");
    homeThermostat.turnOn();
    homeThermostat.setTemperature(16);
    homeThermostat.showStatus();

    SmartSecurityCamera entranceCamera("Entrance Camera", "Main Entrance", "1080p");
    entranceCamera.turnOn();
    entranceCamera.startRecording();
    entranceCamera.viewFeed();
    entranceCamera.showStatus();

    return 0;
}

