#include <iostream>
#include <string>
using namespace std;


// Base class: contains commons attributes and methods. 
class Unit {
    protected: 
        int x;
        int y;

    public: 
        // Constructor: intitalizes the Unit's position. 
        Unit(int startX, int startY) {
            x = startX;
            y = startY;

            cout << "Unit constructor called & running!\n";
        }

        ~Unit() {
            cout << "Unit destructor called!\n";
        }

        // Returns the Unit's position
        void showPosition() const {
            cout << "Position: (" << x << ", " << y << ")\n";
        }

        // Move the Unit one step to the right
        void moveRight() { 
            x++;
        }

};


// Derived class: Robots inherits from Unit. 
class Robot : public Unit {
    private: 
        string name; 

    public: 
        // Initalize the Unit part and then the Robot's name. 
        Robot(string robotName, int x, int y) 
            : Unit(x, y), name(robotName)
        {
            cout << "Robot created!: " << name << endl;
        }

        ~Robot() {
            cout << "Robot destructor called!\n";
        }

        void introduce() const {
            cout << "I am: " << name << endl;
        }
};


int main() {
    cout << "\n--- Experiment 1: Inheritance ---\n";
    
    Robot robot("Alpha", 5, 10);

    robot.introduce(); 

    robot.moveRight();

    // Inherited this method from Unit. 
    robot.showPosition();

    return 0;
}