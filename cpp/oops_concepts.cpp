#include <iostream>
#include <string>
using namespace std;

// 1. Encapsulation: Bundling data and methods that operate on that data
class Animal {
private:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void makeSound() {
        cout << "Animal sound!" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 2. Inheritance: Creating new classes from existing ones
class Dog : public Animal {
public:
    Dog(string n, int a) : Animal(n, a) {}

    // 3. Polymorphism: Overriding base class methods
    void makeSound() {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n, int a) : Animal(n, a) {}

    void makeSound() {
        cout << "Meow!" << endl;
    }
};

// 4. Abstraction: Hiding implementation details
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    // Encapsulation example
    Animal animal("Generic", 5);
    animal.displayInfo();
    animal.makeSound();

    // Inheritance and Polymorphism examples
    Dog dog("Buddy", 3);
    dog.displayInfo();
    dog.makeSound();

    Cat cat("Whiskers", 2);
    cat.displayInfo();
    cat.makeSound();

    // Abstraction example
    Shape* shape = new Circle();
    shape->draw();

    return 0;
}

/*
The 4 Pillars of Object-Oriented Programming:

1. Encapsulation:
   - Bundling data and methods that operate on that data
   - Data hiding using access specifiers (private, protected, public)
   - Provides controlled access to class members

2. Inheritance:
   - Creating new classes from existing ones
   - Promotes code reuse and hierarchical classification
   - Types: Single, Multiple, Multilevel, Hierarchical, Hybrid

3. Polymorphism:
   - Ability to take many forms
   - Types: Compile-time (function overloading, operator overloading)
            Run-time (function overriding using virtual functions)
   - Enables flexible and extensible code

4. Abstraction:
   - Hiding implementation details and showing only essential features
   - Achieved through abstract classes and interfaces
   - Reduces complexity and increases maintainability
*/
