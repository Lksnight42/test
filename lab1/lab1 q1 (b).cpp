#include <iostream>
using namespace std;
int main()
{
    int x = 8, y = 2, z;
    cout << ++x << endl; // 9
    cout << x << endl;   // 9
    cout << x-- << endl; // 9
    cout << x + y << endl; // 10
    cout << x << " " << y << endl; // 8 2
    cout << "x * x = ";  // x * x = 64
    cout << x * x << endl; // 2
    cout << y++ << endl;   // 2
    z = x % y;
    cout << z << endl;
    return 0;
}




