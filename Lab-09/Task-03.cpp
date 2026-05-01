#include "iostream"
#include "cmath"
using namespace std;

class Shape {
    public:
        virtual float calculateArea() = 0;
        virtual float calculatePerimeter() = 0;
};

class Circle : public Shape {
    float radius;

    public:
        Circle(float radius) : radius(radius) {}

        float calculateArea() {
            return (3.14 * radius * radius);
        }

        float calculatePerimeter() {
            return (2 * 3.14 * radius);
        }
};

class Rectangle : public Shape {
    float length, width;

    public:
        Rectangle(float l, float w) : length(l), width(w) {}

        float calculateArea() {
            return (length * width);
        }

        float calculatePerimeter() {
            return (length + length + width + width);
        }
};

class Triangle : public Shape {
    float a, b, c;

    public:
        Triangle(float a, float b, float c) : a(a), b(b), c(c) {}

        float calculateArea() {
            float s = (a + b + c) / 2;
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }

        float calculatePerimeter() {
            return (a + b + c);
        }
};