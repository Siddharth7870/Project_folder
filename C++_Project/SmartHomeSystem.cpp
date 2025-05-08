#include <iostream>
using namespace std;

// Smart Home System class with functionalities.
class SmartHomeSystem
{   
private:
    int option;
    int temperature;
    string name;
    string work;

// Method to display the main menu 
public:
void displayMenu()
{
    cout << "\nSmart Home System Menu:\n";
    cout << "1. Door Unlock\n";
    cout << "2. Set Room Temperature\n";
    cout << "3. Control Home Robot\n";
    cout << "4. Control Lights\n";
    cout << "5. Control Fan\n";
    cout << "6. Automatic Plant Watering\n";
    cout << "7. Exit\n";
    cout << "Choose an option: ";
}

// Method to control door 
void controlDoor()
{
    cout << "\nControl for Door Status!\n";
    
    for (int attemp = 3; attemp > 0; attemp--) 
    {
        cout << "Enter your password: ";
        cin >> name;

        if (name == "Ramanand" || name == "Gaurav" || name == "Santosh")
        {
            cout << "Door unlocked successfully!\n";
            return;
        }
        else
        {
            cout << "Wrong password! Attempts left: " << attemp - 1 << endl;
        }
    }
    cout << "Access Denied! Too many failed attempts.\n";
}

// Method to Control Room temperature
void controlTemperature()
{
    cout << "\nControl Room Temperature!\n";
    cout << "Set Room Temperature: ";
    cin >> temperature;
    cout << "Room temperature set to: " << temperature << "°C\n";
}

// Method to control Robot
void controlRobot()
{
    cout << "\nHome Robot Control Options:\n";
    cout << "M: Play Music\n";
    cout << "V: Play Video\n";
    cout << "W: Give me Water\n";
    cout << "E: Eat\n";
    cout << "C: Clean\n";
    cout << "T: Tea\n";
 
    cout << "What do you want the robot to do? ";
    cin >> work;

    if (work == "M" || work == "m")
        cout << "Playing Music...\n";
    else if (work == "V" || work == "v")
        cout << "Playing Video...\n";
    else if (work == "W" || work == "w")
        cout << "Here is water.\n";
    else if (work == "E" || work == "e")
        cout << "Just a moment, preparing food...\n";
    else if (work == "C" || work == "c")
        cout << "Cleaning in progress...\n";
    else if (work == "T" || work == "t")
        cout << "Preparing tea, please wait...\n";
    else
        cout << "This is not a recognized command.\n";
}


// Method to control lights 
void controlLights(  )
{
    cout << "\nControl Light Status!\n";
    //int option;
    cout << "0: OFF\n";
    cout << "1: ON\n";
    cout << "Choose an option: ";
    cin >> option;

    if (option == 1)
        cout << "Light turned ON.\n";
    else
        cout << "Light turned OFF.\n";
}

// Method to control Fan 
void controlFan()
{ 
    cout << "\nControl Fan Status!\n";
    option;
    cout << "0: OFF\n";
    cout << "1: ON\n";
    cout << "Choose an option: ";
    cin >> option;

    if (option == 1)
        cout << "Fan turned ON.\n";
    else
        cout << "Fan turned OFF.\n";
}



// Method to control plant watering
void controlPlantWatering()
{
    cout << "\nScheduling time for plant watering every day!\n";
    cout << "Morning: 06:00 AM\n";
    cout << "Afternoon: 12:00 PM\n";
    cout << "Evening: 06:00 PM\n";
}

};

int main()
{
    SmartHomeSystem system;
    int choice;

    while (true)
    {
        system.displayMenu();
        cin >> choice;

        switch (choice)
        {
            case 1: system.controlDoor(); break;
            case 2: system.controlTemperature(); break;
            case 3: system.controlRobot(); break;
            case 4: system.controlLights(); break;
            case 5: system.controlFan(); break;
            case 6: system.controlPlantWatering(); break;
            case 7: cout<<"Exiting Smart Home System. Goodbye!\n"; return 0;
            default: cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
