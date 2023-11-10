#include <iostream>
using namespace std;
int multi(int number1, int number2);

int main()
{
    int number1, number2, ans;

    cout << "Enter first integers: ";
    cin >> number1;
    cout << "Enter Second integers: ";
    cin >> number2;

    ans = multi(number1, number2);

    cout << "\n" << number1 << " * " << number1 << " is " << ans << ".";

    return 0;
}

int multi(int number1, int number2)
{

    return number1 * number2;
}
