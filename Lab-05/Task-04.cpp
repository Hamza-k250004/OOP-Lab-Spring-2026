#include "iostream"
using namespace std;

class Device {
    string deviceName, brand;

    public:
        Device(string dName, string b) : deviceName(dName), brand(b) {}

        void displayDevice() {
            cout << "Device Name: " << deviceName << endl;
            cout << "Brand: " << brand << endl;
        }
};

class Connectivity {
    bool wifiStatus, bluetoothStatus;
    
    public:
        Connectivity(bool ws, bool bs) : wifiStatus(ws), bluetoothStatus(bs) {}

        void displayConnectivity() {
            cout << "Wifi Status: " << wifiStatus << endl;
            cout << "Bluetooth Status: " << bluetoothStatus << endl;
        }
};

class SmartWatch : public Device, public Connectivity {
    float heartRate;
    int stepCount;

    public:
        SmartWatch(string dName, string b, bool ws, bool bs, float h, int s) : Device(dName, b), Connectivity(ws, bs), heartRate(h), stepCount(s) {}

        void displaySmartWatch() {
            displayDevice();
            displayConnectivity();
            cout << "Heart Rate: " << heartRate << endl;
            cout << "Step Count: " << stepCount << endl;
        }
};

int main() {
    SmartWatch s("Galaxy Watch", "Samsung", true, true, 70.0, 10000);

    s.displaySmartWatch();

    return 0;
}