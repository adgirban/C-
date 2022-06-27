#include <iostream>
using namespace std;

#define PI 3.142

inline int calcArea(int l = 10)
{
    return 6 * l * l;
}

int calcArea(float r)
{
    return PI * r * r;
}

float calcArea(float len, float b)
{
    return len * b;
}

int main()
{
    int l;
    float r, b, len;

    cout << "The default area of cube = " << calcArea() << endl;

    cout << "Enter length of cube: ";
    cin >> l;
    cout << "The area of cube = " << calcArea(l) << endl;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "The area of circle = " << calcArea(r) << endl;

    cout << "Enter length of rectangle: ";
    cin >> len;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
    cout << "The area of rectangle = " << calcArea(len, b) << endl;

    return 0;
}