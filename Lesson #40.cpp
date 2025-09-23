#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int Arr[3] = { 1,2,3 };
	int* ptr = Arr;


	cout << "I created an array containing 3 elements.\n\n";

	cout << "The address of Arr [0] is : " << ptr << "\n\n";
	cout << "The address of Arr [1] is : " << ptr+1 << "\n\n";
	cout << "The address of Arr [2] is : " << ptr+2 << "\n\n\n\n";


	cout << "The value of Arr [0] is : " << *(ptr) << "\n\n";
	cout << "The value of Arr [1] is : " << *(ptr + 1) << "\n\n";
	cout << "The value of Arr [2] is : " << *(ptr + 2) << "\n\n\n\n";



	cout << "Now this is the address of array elements using for loop . \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "The address of Arr[" << i << "] is : " << (ptr + i) << "\n\n";
	}



	cout << "Finally the values of array elements using for loop . \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "The value of Arr[" << i << "] is : " << *(ptr + i) << "\n\n";
	}

	
}

