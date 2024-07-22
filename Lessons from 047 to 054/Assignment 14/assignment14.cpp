#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    while (num < 520)
    {
        // Your Code Here
        cout << num - 1 << '\n'; 

		num = num * 2 + 1; 

    }

    // Needed Output
    // 1
    // 4
    // 10
    // 22
    // 46
    // 94
    // 190
    // 382
}