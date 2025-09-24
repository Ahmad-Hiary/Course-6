#include <iostream>

using namespace std;

int main()
{

    //declare a pointer.
    int* ptrx;
    float* ptry;

    //Dynamiclly allocate the memory.
    ptrx = new int;
    ptry = new float;

    //Assigning value to the memory.
    *ptrx = 500;
    *ptry = 10.55;

    cout << *ptrx << endl;
    cout << *ptry << endl;

    //Deallocate the memory.
    delete ptrx;
    delete ptry;



}

