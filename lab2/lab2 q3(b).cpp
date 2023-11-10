#include <iostream>
#include <iomanip>
using namespace std;

struct WareHouse
{
    int code;
    char product_name[20];
    float price;
};

float calculate(struct WareHouse WH[], int productCode, int quantity);

int main()
{

    struct WareHouse WH[3] = {{1, "Bed Frame", 1300.70}, {2, "Dining Set", 3800}, {3, "Sofa 3 + 2 + 1 ", 5500}};

    cout << "------------------------------------------\n";
    cout << "- Welcome to XYZ Warehouse -\n";
    cout << "------------------------------------------\n";
    cout << left << setw(5) << "Code" << setw(20) << fixed << setprecision(2) << "Product Name"
         << "Product Price\n";

    for (int i = 0; i < 3; i++)
    {
        cout << left << setw(5) << WH[i].code << setw(20) << WH[i].product_name << WH[i].price << "\n";
    }

    int productCode;
    cout << "Select the product code [1 | 2 | 3] :";
    cin >> productCode;

    int quantity;
    cout << "Enter the quantity : ";
    cin >> quantity;

    float total = calculate(WH, productCode, quantity);

    cout << "Total price for product : RM " << total << endl;
}

float calculate(struct WareHouse WH[], int productCode, int quantity)
{
    float total;

    for (int i = 0; i < 3; i++)
    {
        if (WH[i].code == productCode)
        {
            total = WH[i].price * quantity;
        }
    }

    return total;
}