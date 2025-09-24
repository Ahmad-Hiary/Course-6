#include <iostream>

using namespace std;


int main()
{
    float x = 4.2;
    void* ptr;

    ptr = &x;

    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << "\n\n";

    int j = 4;

    ptr = &j;

    cout << ptr << "\n";
    cout << *(static_cast<int*>(ptr)) << "\n\n";


}
