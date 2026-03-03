#include<iostream>

using namespace std;

class SmartLight{

    string brand;
    int brightness;
    bool isOn;

    public:
    SmartLight(){
        brand = "unknown";
        brightness = 50;
        isOn = false;
    }
    SmartLight(string b, int br, bool is){
        brand = b;
        brightness = br;
        isOn = is;
    }

    void turnOn(){
        isOn = true;
        cout<<"LIGHT IS ON!"<<endl;
    }
    void turnOff(){
        isOn = false;
        cout<<"LIGHT IS OFF!"<<endl;
    }
    void increaseBrightness(){
      if (brightness < 100) {
            brightness += 10;
            if (brightness > 100)
                brightness = 100;
        }
        cout << "Brightness Increased to " << brightness << endl;
    }

    void decreaseBrightness(){
        if (brightness > 0) {
            brightness -= 10;
            if (brightness < 0)
                brightness = 0;
        }
        cout << "Brightness Decreased to " << brightness << endl;
    }
    void displayStatus(){
        cout <<"\nBrand: "<<brand;
        cout <<"\nBrightness: "<<brightness;
        cout <<"\nStatus: "<<(isOn?"ON":"OFF")<<endl;
    }

    ~SmartLight() {
        cout << "Object destroyed\n";
    }
};

int main(){
    SmartLight light1;

    SmartLight light2("Philips", 70, true);


    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();


}