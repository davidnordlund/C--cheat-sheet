#include <iostream>
#include <string>
using namespace std;

class Robot {
    private:
        string name;
        int health;

        public: 
            // Constructor: Initalizes the Robot
            Robot(string robotName, int robotHealth) {
                name = robotName;
                health = robotHealth;
            }

            // Destructor: Called when a Robot is destroyed!
            ~Robot() {
                cout << "Robot destroyed!: " << name << endl;
            }

    // Getter: returns the Robot's current health.
    int getHealth() const {
        return health;
    }

    void setHealth(int newHealth) {
        health = newHealth;
    }
};


int main()  {

    cout << "\n--- Experiment 1: Dot vs Arrow ---\n";

    Robot robot("Alpha", 100);
    cout << "Health: " << robot.getHealth() << endl;

    // Create a pointer to the EXISTING Robot. 
    Robot* ptr = &robot;

    // Access the same Robot using the arrow operator
    cout << "Health trough pointer: " 
         << ptr->getHealth() << endl;

    // Modify the Robot trough the pointer.
    ptr->setHealth(50);

    cout << "Health trough modification: "
         << robot.getHealth() << endl;




    cout << "\n--- Experiment 2: Dynamic Robot ---\n";

    // Create a new Robot on the heap.
    Robot* enemy = new Robot("Enemy", 100);

    // Call a method trough a pointer. 
    cout << "Enemy HP: " << enemy->getHealth() << endl;

    // Modify the dynamically allocated Robot. 
    enemy->setHealth(40);
    
    cout << "Enemy New HP: " << enemy->getHealth() << endl;

    // Destroy the enemy after use and free its mememory. 
    delete enemy;

    enemy = nullptr;

    return 0;
}