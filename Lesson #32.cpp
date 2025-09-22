#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "First Element: " << vNumbers.front() << endl;
    cout << "Last Element: " << vNumbers.back() << endl;

    // Returns the number of elements present in the vector
    cout << "Size: " << vNumbers.size() << endl;

    // Check the overall capacity of the vector
    cout << "Capacity: " << vNumbers.capacity() << endl;

    // Returns 1 (true) if the vector is empty
    cout << "Empty: " << vNumbers.empty() << endl;

    return 0;
}