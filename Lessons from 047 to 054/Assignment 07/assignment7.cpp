#include <iostream>
using namespace std;

int main()
{
    //For Loop
    for (int i = 2; i <= 128; i *= 2)
    cout << i << endl;
    // While Loop
    cout << "==========\n";
    int i = 2;
    while (i <= 128)
    {
        cout << i << endl;
        i *= 2;
    }
    return 0;
}