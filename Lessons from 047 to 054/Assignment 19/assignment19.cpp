#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i <= 1100; i += 100)
    {
        if (i > 100 && i < 1100)
        {
            cout << i << endl
                 << i << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}