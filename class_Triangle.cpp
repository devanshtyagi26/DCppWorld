#include <bits/stdc++.h>
using namespace std;

class Triangle{
    private:
        float side1, side2, side3;

    public:
        Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3){
            if(side1<=0 || side2<=0 || side3<=0){
                throw invalid_argument("Sides should be greater than zero");
            }
            if(side1+side2<=side3 || side2+side3<=side1 || side3+side1<=side2){
                throw invalid_argument("Sum of two sides should be greater than the third side");
            }
        }

        float calculateArea(){
            float s = (side1+side2+side3)/2;
            return sqrt(s*(s-side1)*(s-side2)*(s-side3));
        }

        float calculateArea(float base, float height){
            return (base*height)/2;
        }

};

int main() {
    try {
        Triangle triangle1(3, 4, 5);
        cout << "Area of the triangle (using Heron's formula): " << triangle1.calculateArea() << endl;

        Triangle triangle2(6, 8, 10);
        cout << "Area of the triangle (using Heron's formula): " << triangle2.calculateArea() << endl;

        Triangle triangle3(5, 12, 13);
        cout << "Area of the triangle (using Heron's formula): " << triangle3.calculateArea() << endl;

        Triangle triangle4(3, 4, 5);
        double base = 4, height = 3;
        cout << "Area of the right-angled triangle: " << triangle4.calculateArea(base, height) << endl;

        // Invalid triangle
        Triangle invalidTriangle(0, 2, 3);
        cout << "This line will not be executed due to the exception." << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}