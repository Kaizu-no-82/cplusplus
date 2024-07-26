/******************************************************************************
A friend class can access private and protected members of other classes in 
which it is declared as a friend. It is sometimes useful to allow a particular
class to access private and protected members of other classes. For example,
a LinkedList class may be allowed to access private members of Node.

friend class class_name;

*******************************************************************************/
#include <iostream>

// Forward declaration of Rectangle class
class Rectangle;

// Friend function declaration
int calculateArea(const Rectangle &rect);

// Rectangle class definition
class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Friend declaration
    friend int calculateArea(const Rectangle &rect);
};

// Friend function definition
int calculateArea(const Rectangle &rect) {
    // Access private members directly because it's a friend function
    return rect.width * rect.height;
}

int main() {
    Rectangle r(5.0, 3.0);

    // Call friend function to calculate area
    int area = calculateArea(r);

    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
//Public constructor Rectangle(double w, double h) initializes width with w and height with h using the initializer list : width(w), height(h).