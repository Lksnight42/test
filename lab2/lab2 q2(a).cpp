#include <iostream>
using namespace std;

void get_a_b_c(double &a, double &b, double &c);
double bb_4ac(double a, double b, double c);

int main()
{
    double a, b, c;

    get_a_b_c(a, b, c);

    double discriminant = bb_4ac(a, b, c);

    cout << "The discriminant is " << discriminant << endl;

    return 0;
}

void get_a_b_c(double &a, double &b, double &c)
{
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
}

double bb_4ac(double a, double b, double c)
{
    return b * b - 4 * a * c;
}