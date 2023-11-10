#include <iostream>
using namespace std;

void findtotal(int arr[]);

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter a number: ";
        cin >> numbers[i];
    }

    findtotal(numbers);

    return 0;
}

void findtotal(int arr[])
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }
    cout << "\nSum is " << total << endl;
}
