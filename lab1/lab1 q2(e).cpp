#include <iostream>
using namespace std;

int main()
{
    int input, total = 0; 
    cout << "Enter a number: ";
    cin >> input;

    while (input != 99)
    {
        total += input;
        cout << "Enter a number: ";
        cin >> input;
    }

    cout << "The total is " << total << endl;

    return 0;
}