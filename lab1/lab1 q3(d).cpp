#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
int main()
{
    int j, i;

    int num[2][3] = {{21, 4, 12}, {8, 45, 12}};

    for (i = 0; i < 2; i++)
    {
        cout << "Row " << (i + 1) << ": ";
        for (j = 0; j < 3; j++)
        {
            cout << setw(3) << num[i][j];
        }
        cout << endl;
    }
    return 0;
}