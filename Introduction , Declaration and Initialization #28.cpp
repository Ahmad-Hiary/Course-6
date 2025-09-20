//this is a pratice on vectors .

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNumbers = { 1,2,3,4,5 };

	cout << "The vector numbers = ";

	for (int &Number : vNumbers)
	{
		cout << Number << " ";
	}
}

