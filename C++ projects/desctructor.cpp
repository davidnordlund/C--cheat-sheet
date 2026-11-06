#include <iostream>
#include <string>
using namespace std;

// Experiment 1: 

class Robot {
    private: 
    string name;
    int health;


    public: 

    // Constructor: Initializes the Robot's name and health. 
        Robot(string robotName, int robotHealth) { 
            name = robotName;
            health = robotHealth;

            cout << name << " created with: " << health << " HP!\n";
        }

    // Destructor, called when the object is destroyed
        ~Robot() {
            cout << name << " destroyed!\n";
        } 

    // Getter: returns the Robots's current health.
    int getHealth() const {
        return health;
    }


    // Setter: updates the Robot's health value
    // Allows controleld modification of a private attribute. 
    void setHealth(int newHealth) {
        if (newHealth >= 0 ) {
            health = newHealth;
        } 
        else {
            cout << "\nHealth value can not be < 0! \n";
        }
    }



    // Reduces the Robot's health by a specified amount.
    // Uses setHealth() to uipdate the private health value. 
    void takeDamage(int damage) {
        if (damage <= 0) {
            cout << "Damage must be greater than 0!\n";
            return;
        }

        int newHealth = health - damage;

        if (newHealth < 0) {
            newHealth = 0;
        }

        setHealth(newHealth);

        cout << name << " took " << damage << " damage! New health: " << health << " HP\n";
}


};






int main() {

    cout << "\n---Experiment (1)---\n";
    cout << "\nStarting program...\n";

    {
        Robot robot("First", 100); // Automatic storage
        cout << "Robot exists\n";
    }


    cout << "\n---Experiment (2)---\n";
    // Experiment 2: Dynamic mememory allocation.
    cout << "\nCreating a Robot dynamically...\n";

    // Create a Robot on the heap.
    Robot* robotPtr = new Robot("Second", 80);

    cout << "The dynamically allocated robot exists\n";

    // Destroy the Robot and release its memory
    delete robotPtr;

    // Avoid keeping a dangling ptr. 
    robotPtr = nullptr; 



    cout << "\n---Experiment (3)---\n\n";
    Robot first("Third", 100);
    
    { 
        Robot second("Fourth", 75);
        Robot third("Fifth", 50);

        cout << "Inside the inner scope\n";
    }

    cout << "Outside the inner scope\n";



    cout << "\n---Experiment (4)---\n\n";

    // Create a Robot with a name and inital health.
    Robot fighter("Fighter", 150);

    // Read its helath using the getter
    cout << "Fighter has " << fighter.getHealth() << " HP!\n";




    cout << "\n---Experiment (5)---\n\n";
    
    // Change the Robot's value using a public setter.
    fighter.setHealth(75);
 
    cout << "Fighters new health: " << fighter.getHealth() << " HP\n";


    // Try assign a invalid health value... 
    fighter.setHealth(-50);

    cout << "Health after invalid update: " << fighter.getHealth() << " HP!\n" << endl;


    cout << "\n---Experiment (6)---\n\n";
    fighter.takeDamage(25);

    fighter.takeDamage(200);
    fighter.takeDamage(-10);

    return 0;
}