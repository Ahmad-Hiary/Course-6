#include <iostream>
#include <cstdio>

using namespace std;

void Swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 10, b = 20;

    printf("The values of a and b before the swap are: %d, %d\n\n", a, b);

    Swap(&a, &b);
    
    printf("The values of a and b after the swap are: %d, %d\n\n", a, b);
    
}

