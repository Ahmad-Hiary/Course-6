//practice on vectors .

#include <iostream>
#include <vector>

using namespace std;

void ReadNumbers(vector <int> &vNumber)
{
	char Add = 'y';
	int Number = 0;

	while (Add == 'y' || Add == 'Y')
	{
		cout << "Please to add an element to vector enter a number ?\n";
		cin >> Number;

		vNumber.push_back(Number);

		cout << "Do you want add an element to vector ?\n";
		cin >> Add;
	}
}

void PrintVectorElements(vector <int> &vNumber)
{
	cout << "Vectors elements are : ";

	for (int Number : vNumber)
	{
		cout << Number << " ";
	}
}

int main()
{

	vector <int> vNumbers;

	ReadNumbers(vNumbers);
	PrintVectorElements(vNumbers);
	


}


