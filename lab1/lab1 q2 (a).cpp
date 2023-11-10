#include <iostream>
using namespace std;
#include <iomanip>

int main()
{

    int regular_hours = 40, total_hours, overtime_hours;
    float overtime_payrate = 24.35, base_payrate = 18.50, regular_wages, overtime_wages, total_wages;

    cout << "Enter total hours : ";
    cin  >> total_hours;

    if (total_hours >= 40)
    {
        overtime_hours = total_hours - regular_hours;
    }
    else
    {
        overtime_hours = 0;
        regular_hours = total_hours;
    }

    regular_wages = base_payrate * regular_hours;
    overtime_wages = overtime_payrate * overtime_hours;
    total_wages = regular_wages + overtime_wages;

    cout << "Wages for this week are RM" << fixed << setprecision(2)<< total_wages << endl;
}
