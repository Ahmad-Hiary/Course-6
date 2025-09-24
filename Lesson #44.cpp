#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int StudentsNumber = 0;

    cout << "Please enter how much students you have ?\n";
    cin >> StudentsNumber;

    int* ptr;

    ptr = new int[StudentsNumber];

    for (int i = 0; i < StudentsNumber; i++)
    {
        printf("Please enter student %d grade : ", i + 1);
        cin >> *(ptr + i);
        printf("\n\n");
    }

    printf("\nOkay now lets display the %d students grades . \n\n", StudentsNumber);

    for (int i = 0; i < StudentsNumber; i++)
    {
        printf("Student %d grade : %d", i + 1, *(ptr + i));
        
        printf("\n\n");
    }


    delete[] ptr;

}



