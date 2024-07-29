#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40 };

    cout << "First Element is: " << numbers[0] << endl;
    cout << "First Element is: " << numbers.front() << endl;
    cout << "First Element is: " << numbers.at(0) << endl;
    cout << "First Element is: " << numbers.at(numbers.size() - 4) << endl;
    cout << "=========================\n";
    cout << "Last Element is: " << numbers[3] << endl;
    cout << "Last Element is: " << numbers.back() << endl;
    cout << "Last Element is: " << numbers.at(3) << endl;
    cout << "Last Element is: " << numbers.at(numbers.size() - 1) << endl;
    return 0;
}