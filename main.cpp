#include <iostream>
#include <cmath>
using namespace std;

// Calculator class
class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return (b != 0) ? a / b : 0; }
};

// Student class
class Student {
public:
    string name;
    int ID;
    double grade;
    Student(string n, int i, double g) : name(n), ID(i), grade(g) {}
    void display() {
        cout << "Name: " << name << ", ID: " << ID << ", Grade: " << grade << endl;
    }
};

// Rectangle class
class Rectangle {
public:
    double width, height;
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};

// Counter class
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

// Point class
class Point {
public:
    double x, y;
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

int main() {
    // Testing Calculator
    Calculator calc;
    cout << "Addition: " << calc.add(10, 5) << endl;
    cout << "Division: " << calc.divide(10, 2) << endl;

    // Testing Student
    Student student("Andini", 123, 90.5);
    student.display();

    // Testing Rectangle
    Rectangle rect(5, 10);
    cout << "Rectangle Area: " << rect.area() << endl;

    // Testing Counter
    Counter counter;
    counter.increment();
    counter.increment();
    cout << "Counter Value: " << counter.getCount() << endl;

    // Testing Point
    Point point(3, 4);
    cout << "Distance from Origin: " << point.distanceFromOrigin() << endl;

    return 0;
}
