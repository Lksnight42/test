#include <iostream>
#include <cmath>
using namespace std;

float kineticEnergy(double mass, double velocity);

int main()
{
    double mass, velocity, kineticenergy;

    cout << "Enter an object's mass and velocity as required ...\n"
         << endl;

    cout << "Mass in kilograms: ";
    cin >> mass;

    cout << "Velocity in meters per second: ";
    cin >> velocity;

    kineticenergy = kineticEnergy(mass, velocity);

    cout << "The kinetic energy of this object is " << kineticenergy << " joules";
}

float kineticEnergy(double mass, double velocity)
{
    float kineticEnergy;

    kineticEnergy = 0.5 * mass * pow(velocity, 2);

    return kineticEnergy;
}