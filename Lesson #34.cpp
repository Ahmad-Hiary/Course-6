#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int& x = a;

    cout << a << endl;
    cout << "Address of a " << &a << "\n\n";

    cout << x << endl;
    cout << "Address of x " << &x << endl;
}

