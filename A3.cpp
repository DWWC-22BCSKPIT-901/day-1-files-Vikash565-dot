#include <iostream>
using namespace std;
const double PI = 3.14159;
double calculateArea(double radius) {
    return PI * radius * radius;
}
int calculateArea(int length, int breadth) {
    return length * breadth;
}
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}
int main() {
    double radius, base, height;
    int length, breadth;
    cin >> radius;
    cin >> length >> breadth;
    cin >> base >> height;
    cout << calculateArea(radius) << endl;
    cout << calculateArea(length, breadth) << endl;
    cout << calculateArea(base, height) << endl;
    return 0;
}