#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Base class. 
class Unit {
    public: 
        virtual void speak() const {
            cout << "I am a Unit!\n";
        }

        // Virtual destructor: 
        virtual ~Unit() {
            cout << "Unit destroyed!\n";
        }

        // Virtual clone: creates a dynamically allocated copy. 
        // Derived classes ovveride it to preserve their actual type: 
        virtual Unit* clone() const {
            return new Unit(*this);
        }
};

// Derived class: inherits from Unit
class Robot : public Unit {
    public: 
        // Robots own version of speak(). 
        void speak() const override {
            cout << "I am Robot!\n";
        }

        // Override clone: creates a new Robot from this Robot. 
        Unit* clone() const override {
            return new Robot(*this);
        }
};


// Derived class: Junk also inherits from Unit. 
class Junk : public Unit {
    public: 
        void speak() const override {
            cout << "I am Junk! I am immovable!\n";
        }

        Unit* clone() const override {
            return new Junk(*this);
        }
}; 

int main() {
    cout << "\n--- Experiment 1: With virtual ---\n";

    Robot robot;

    robot.speak();

    // Create a Unit ptr
    Unit* ptr = &robot; 

    // Call the method trough a Unit pointer
    ptr->speak();


    cout << "\n--- Experiment 2: Polymorphism with vector ---\n";

    // A vector that stores ptr:s to Unit objects.
    vector<Unit*> units; 

    // Create different objects dynamically
    units.push_back(new Robot());
    units.push_back(new Junk());
    units.push_back(new Robot());

    // Loop trough every Unit Pointer. 
    for (Unit* unit : units) {
        unit->speak();
    }

    // Free all dynamically allocated objects: 
    for (Unit* unit : units) {
        delete unit;
    }



    cout << "\n--- Experiment 3: Clearing pointers ---\n";


    vector<Unit*> robots;

    robots.push_back(new Robot());
    robots.push_back(new Junk());

    cout << "Before cleanup: " << robots.size() << endl;

    // Delete dynamical objects: 
    for (Unit* unit : robots) {
        delete unit;
    }

    // Remove the danglings ptr:s for the vector: 
    robots.clear();

    cout << "\nAfter cleanup: " << robots.size() << endl; 




    cout << "\n--- Experiment 4: Polymorphic cloning ---\n";

    // Create a Robot through a Unit ptr: 
    Unit* original = new Robot();

    // Create a NEW object of the same actualy type: 
    Unit* copied = original->clone(); 

    // Both should behave like robots: 
    cout << "Original says: "; 
    original -> speak(); 

    cout << "Copy says: "; 
    copied -> speak();
    cout << "\n";

    // Both objects were allocated with new.
    delete original;
    delete copied; 

    return 0;
}