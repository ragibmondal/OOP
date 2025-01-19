// OOPExample.java - Demonstrating Object-Oriented Programming concepts

/*
 * ENCAPSULATION:
 * The process of wrapping data (variables) and code (methods) together as a single unit.
 * Achieved by declaring variables as private and providing public getter and setter methods.
 * Benefits:
 * - Data hiding: Prevents direct access to internal representation
 * - Increased flexibility: Can change internal implementation without affecting other code
 * - Reusability: Encapsulated code can be reused in different parts of the program
 * - Maintainability: Easier to maintain and modify code
 */
class Animal {
    // Private fields
    private String name;
    private int age;

    // Public methods to access private fields
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Method to be overridden
    public void makeSound() {
        System.out.println("Animal sound");
    }
}

/*
 * INHERITANCE:
 * A mechanism where a new class acquires the properties and behaviors of an existing class.
 * The existing class is called the parent/super class, and the new class is called the child/sub class.
 * Benefits:
 * - Code reusability: Reuse fields and methods of existing class
 * - Method overriding: Child class can provide specific implementation of parent class methods
 * - Extensibility: Easily extend functionality by adding new features in child class
 */
class Dog extends Animal {
    // Additional field specific to Dog
    private String breed;

    public String getBreed() {
        return breed;
    }

    public void setBreed(String breed) {
        this.breed = breed;
    }

/*
 * POLYMORPHISM:
 * The ability of an object to take on many forms. In Java, polymorphism is mainly achieved through:
 * 1. Method Overriding: Child class provides specific implementation of parent class method
 * 2. Method Overloading: Multiple methods with same name but different parameters
 * Benefits:
 * - Code flexibility: Same method name can be used for different implementations
 * - Extensibility: New classes can be added without modifying existing code
 * - Maintainability: Easier to maintain and modify code
 */
    @Override
    public void makeSound() {
        System.out.println("Woof!");
    }
}

/*
 * ABSTRACTION:
 * The process of hiding implementation details and showing only essential features.
 * Achieved through abstract classes and interfaces.
 * Abstract class:
 * - Can have abstract and concrete methods
 * - Cannot be instantiated
 * - Used when there is an "is-a" relationship
 * Interface:
 * - Contains only abstract methods (Java 8+ allows default methods)
 * - Used when there is a "can-do" relationship
 * Benefits:
 * - Reduces complexity by hiding implementation details
 * - Increases reusability and maintainability
 * - Provides flexibility in implementation
 */
abstract class Shape {
    // Abstract method
    public abstract double calculateArea();
}

// Interface example
interface Drawable {
    void draw();
}

// Concrete class implementing abstract class and interface
class Circle extends Shape implements Drawable {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public void draw() {
        System.out.println("Drawing a circle with radius: " + radius);
    }
}

// Main class to demonstrate OOP concepts
public class OOPExample {
    public static void main(String[] args) {
        // Encapsulation demonstration
        Animal animal = new Animal();
        animal.setName("Generic Animal");
        animal.setAge(5);
        System.out.println("Animal name: " + animal.getName());
        System.out.println("Animal age: " + animal.getAge());

        // Inheritance and Polymorphism demonstration
        Dog dog = new Dog();
        dog.setName("Buddy");
        dog.setAge(3);
        dog.setBreed("Golden Retriever");
        System.out.println("\nDog name: " + dog.getName());
        System.out.println("Dog age: " + dog.getAge());
        System.out.println("Dog breed: " + dog.getBreed());
        dog.makeSound();

        // Abstraction demonstration
        Circle circle = new Circle(5.0);
        System.out.println("\nCircle area: " + circle.calculateArea());
        circle.draw();
    }
}
