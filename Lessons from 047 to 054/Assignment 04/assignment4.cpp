#include <iostream>
using namespace std;

int main()
{
    // For Loop
    for (int i = 0; i <= 18; i += 2)
    {
        if (i == 10 || i == 12)
        {
            continue;
        }
        cout << i << endl;
    }
    //While Loop
    cout << "============\n";
    int i = 0;
    while (i <= 8)
    {
        cout << i << endl;
        i += 2;
    }
    int x = 14;
    while (x <= 18)
    {
        cout << x << endl;
        x += 2;
    }
    return 0;
}