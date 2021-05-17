#include <iostream>
#include <cmath>
using namespace std;

/*
    Write a C++ program that prompts the user for the radius of a circle,
    and then calls inline function circleArea to calculate the area of that circle.
*/

inline double circleArea ( double radius ) {
    return 2 * acos(0.0) * radius * radius;
}

int main() {
    double userRadius, area;
    cout << "Input the radius of a circle to receive it's area: " << endl;
    
    cin >> userRadius;
    area = circleArea( userRadius );

    cout << "Area: " << area << endl;

    return 1;
}

