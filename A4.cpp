 #include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual void calculateArea() = 0; 
    virtual ~Shape() {}              
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape* shape = nullptr;
    int choice;
    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            shape = new Circle(radius);
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            shape = new Rectangle(length, width);
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            shape = new Triangle(base, height);
            break;
        }
        default:
             cout << "Invalid choice!" << endl;
            return 1;
    }
    if (shape) {
        shape->calculateArea();
        delete shape; // Free allocated memory
    }
    return 0;
}
