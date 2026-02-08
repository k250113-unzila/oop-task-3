#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool status;  // true = ON, false = OFF

public:
    // Parameterized constructor
    SmartDevice(string name, string type, bool state) {
        deviceName = name;
        deviceType = type;
        status = state;

        cout << "Device Activated: " << deviceName
             << " (" << deviceType << ") is "
             << (status ? "ON" : "OFF") << endl;
    }

    // Destructor
    ~SmartDevice() {
        cout << "Shutting down " << deviceName
             << " (" << deviceType << "). Goodbye, old friend." << endl;
    }
};

int main() {
    cout << "Creating Smart Devices...\n" << endl;

    // Object created in scope
    SmartDevice light("Living Room Light", "Smart Light", true);
    SmartDevice vacuum("Dust Terminator 3000", "Robo-Vacuum", false);

    cout << "\nEntering a new scope...\n" << endl;

    {
        SmartDevice coffee("Caffeinator X", "Coffee Overlord", true);
        cout << "Coffee is being brewed...\n" << endl;
    } // coffee destructor called here

    cout << "Exiting program...\n" << endl;

    return 0;
}

