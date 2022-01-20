#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Structure declaration
struct Triangle
{
    double base;        // A triangle's base
    double height;      // A triangle's height
    double area;        // A triangle's area
};

// Function prototype
Triangle getInfo();

int main()
{
    // Define a structure variable.
    Triangle t;

    // Get data about the triangle.
    t = getInfo();

    // Calculate the triangle's area.
    t.area = (t.base * t.height) / 2.0;

    // Display the triangle data.
    cout << "The area of the triangle is: " << endl;
    cout << fixed << setprecision(2) << t.area << endl;

    system("pause");
    return 0;
}

//***************************************************************
// Definition of function getInfo. This function uses a local   *
// variable, tempTriangle, which is a triangle structure. The   *
// user enters the base and height of the triangle, which is    *
// stored in tempTriangle.base and tempTriangle.height.         *
// tempTriangle is then returned from the function.             *
//***************************************************************

Triangle getInfo()
{
    Triangle tempTriangle; // Temporary structure variable

    // Store triangle data in the temporary variable.
    cout << "Enter the base of a triangle: " << endl;
    cin >> tempTriangle.base;
    cout << "Enter the height of a triangle: " << endl;
    cin >> tempTriangle.height;

    // Return the temporary variable.
    return tempTriangle;
}