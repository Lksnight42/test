#include <iostream>
using namespace std;

int main()
{
    int number, num = 0, total = 0, even = 0, odd = 0;

    do
    {
        cout << "Enter a number : ";
        cin >> number;
        num++;
        total += number;

        if (number % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    } while (num < 10);

    cout << "There are " << even << " even numbers and " << odd << " odd numbers" << endl;
    cout << "The total of all the 10 numbers is " << total << endl;

    return 0;
}