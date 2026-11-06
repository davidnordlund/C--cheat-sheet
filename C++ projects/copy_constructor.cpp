#include <iostream>
#include <string>
using namespace std;

class Robot {
    private:
        string name;
        int health;

    public:



    // constructor: initalizes a new Robot.
    Robot(string robotName, int robotHealth) {
        name = robotName;
        health = robotHealth;

        cout << "Constructor: " << name << endl;
    }



    // NEW: COPY CONSTRUCTOR: Creates a new Robot from an existing robot.
    Robot(const Robot& other)
        : name(other.name), health(other.health)
    {
        cout << "Copy constructor: " << name << endl;
    } 
    


    // Copy assignment operator: copies values into an existing Robot.
    Robot& operator=(const Robot& other) {
        name = other.name;
        health = other.health;

        cout << "Copy Asssignment: " << name << endl;

        return *this;
    }


    // Destructor: called when the robot is destroyed
    ~Robot() {
        cout << "Destructor: " << name << endl; 
    }


    // Getter: returns the Robot's health
    int getHealth() const {
        return health;
    }


    // Setter: Modifies the Robot's health.
    void setHealth(int newHealth) {
        if (newHealth >= 0) {
            health = newHealth;
        }
    }
};



int main() {
    cout << "--- Experiment 1: Copy Constructor --- \n" << endl;

    {
    Robot original("Alpha", 100);
    Robot copy = original;

    copy.setHealth(50);

    cout << "Original HP: " << original.getHealth() << endl;
    cout << "Copy HP: " << copy.getHealth() << endl;

    } // Both robots are destroyed here!


    cout << "\n--- Experiment 2: Copy Constructor --- \n" << endl; 

    {
    Robot a("Alpha", 100);
    Robot b("Beta", 50);

    b = a;      


    cout << "A HP: " << a.getHealth() << endl;
    cout << "B HP: " << b.getHealth() << endl;

    } // Both robots are destroyed here!



    // EXPERIMENT 3: Constructor vs Copy Constructor vs Assignment
    cout << "\n--- Experiment 3: Constructor vs Assignment ---\n";

    {
    Robot x("X", 100); // Normal constructor

    Robot y = x;       // Copy constructor

    Robot z("Z", 20);  // Normal constructor

    z = x;             // Copy assignment

    } // All three robots are destroyed here!


    cout << "\n--- Experiment 4: Same values, different operations ---\n";

    {
        Robot x("Alpha", 100);

        cout << "\nCreating y...\n";
        Robot y = x;

        cout << "\nCreating z...\n";
        Robot z("Beta", 50);

        cout << "\nAssigning x-valus to z...\n";
        z = x;

        cout << endl << "X: " << x.getHealth() << endl;
        cout << "Y: " << y.getHealth() << endl;
        cout << "Z: " << z.getHealth() << endl << endl;
    }
    
    cout << "\nDestroying all robots...\n";
    return 0;
}