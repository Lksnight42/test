#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
double area(double radius);
double volume_of_sphere(double radius);
int main()
{
    double radius, area_of_circle, volume_of_sphere;
    cout << "Enter a radius of a circle :";
    cin >> radius;
    area_of_circle = area(radius);
    volume_of_sphere = 4.0 / 3.0 * PI * pow(radius, 3);
    cout << "Radius = " << radius << " inches\n"
         << "Area of circle = " << area_of_circle
         << " square inches\n"
         << "Volume of sphere = " << volume_of_sphere
         << " cubic inches\n";
    return 0;
}

double area(double radius)
{
    return PI * pow(radius, 2);
}

double volume_of_sphere(double radius)
{
    return 4.0 / 3.0 * PI * pow(radius, 3);
}