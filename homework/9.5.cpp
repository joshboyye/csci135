/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Homework E9.5

This program will create a class Rectangle that has a width and height. It will have methods to get the perimeter and area of the rectangle, and a method to resize the rectangle by a factor.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double get_perimeter() {
        return 2 * (width + height);
    }

    double get_area() {
        return width * height;
    }

    void resize(double factor) {
        width *= factor;
        height *= factor;
    }
};

int main() {
    // Example usage
    Rectangle rect(5.0, 3.0);
    cout << "Perimeter: " << rect.get_perimeter() << endl;
    cout << "Area: " << rect.get_area() << endl;

    rect.resize(2.0);
    cout << "Resized Perimeter: " << rect.get_perimeter() << endl;
    cout << "Resized Area: " << rect.get_area() << endl;

    return 0;
}