#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


int main()
{
	vector <int> vNumbers{ 1,2,3,4,5 };

	printf("\tI will now print the vector elements in two ways\n\n");

	printf("\t\t\tUsing .at(i) \n\n");

	printf("Element at index 0 : %d\n", vNumbers.at(0));
	printf("Element at index 3 : %d\n", vNumbers.at(3));
	printf("Element at index 4 : %d\n\n\n", vNumbers.at(4));

	printf("\t\t\tUsing [i] \n\n");

	printf("Element at index 0 : %d\n", vNumbers[0]);
	printf("Element at index 3 : %d\n", vNumbers[3]);
	printf("Element at index 4 : %d\n\n\n", vNumbers[4]);
	

}
