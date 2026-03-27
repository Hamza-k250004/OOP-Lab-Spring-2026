#include "iostream"
using namespace std;

class Shape {
    public:
        void area(float radius) {
            float ans = 3.14 * radius * radius;
            cout << "Area of the circle is " << ans << endl;
        }

        void area(float length, float width) {
            float ans = length * width;
            cout << "Area of the rectangle is " << ans << endl;
        }
        
        void area(float base, float height, bool isTriangle) {
            if (isTriangle)
            {
                float ans = 0.5 * base * height;
                cout << "Area of the triangle is " << ans << endl;
            }
            else
            {
                cout << "Not a triangle!" << endl;
            }
        }
};

int main() {
    Shape s;

    s.area(3);
    s.area(2, 4);
    s.area(2, 3, true);

    return 0;
}