#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* p = &a;

    cout << "a value is    : " << a << endl;
    cout << "a address is  : " << &a << endl;

    cout << "\npointer p value is           : " << p << endl;
    cout << "The value that p pointing on : " << *p << endl;

    *p = 20;

    cout << "\nThe value of a after change it using p is : " << a << endl;

}

