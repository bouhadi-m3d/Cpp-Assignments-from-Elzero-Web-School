#include <iostream>
using namespace std;

int main()
{
    // For Loop
    for (int i = 10; i <= 100000000; i = i * i)
        cout << i << endl;
    // While Loop
    int i = 10;
    while (i <= 100000000)
    {
        cout << i << endl;
        i *= i;
    }
    return 0;
}