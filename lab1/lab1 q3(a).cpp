#include<iostream>
using namespace std;

int main(){
    int a, b;
    int *p, *q;
    a = 20;
    p = &a;
    b = *p % 2 + 40;
    q = p;
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 40
    cout << "*p = " << *p << endl; // 20
    cout << "*q = " << *q << endl; // 20
}