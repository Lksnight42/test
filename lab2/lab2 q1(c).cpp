#include <iostream>
#include <cmath>
using namespace std;

void kineticEnergy(double &mass, double &velocity, double &kineticenergy);

int main()
{
    double value1, value2, value3;

    kineticEnergy(value1, value2, value3);
}

void kineticEnergy(double &mass, double &velocity, double &kineticenergy)
{
    cout << "Enter an object's mass and velocity as required ...\n"
         << endl;

    cout << "Mass in kilograms: ";
    cin >> mass;

    cout << "Velocity in meters per second: ";
    cin >> velocity;

    kineticenergy = 0.5 * mass * pow(velocity, 2);
    cout << "The kinetic energy of this object is " << kineticenergy << " joules";
}