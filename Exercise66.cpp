#include <iostream>
using namespace std;

float area(float *side)
{
    return *side * *side;
}

float area(float *length, float *width)
{
    return *length * *width;
}

float area(float *radius ,double pi)
{
    return pi * (*radius) * (*radius);
}

int main()
{
    float radius;
    cout << "Enter the radius of square : ";
    cin >> radius;

    float squareArea = area(&radius);

    float length, width;
    cout << "Enter the length of rectangle : ";
    cin >> length;
    cout << "Enter the width of rectangle : ";
    cin >> width;
    float rectangleArea = area(&length, &width);

    float cRadius;
    cout << "Enter the radius of circle to find area : ";
    cin >> cRadius;
    float circleArea = area(&cRadius,3.14159);

    cout << "Area of Circle is " << circleArea << endl;
    cout << "Area of Rectangle is " << rectangleArea << endl;
    cout << "Area of Square is " << squareArea << endl;
    return 0;
}
