#include <iostream>
using namespace std;

int main()
{
    int index = 10;
    int jump = 2;

    for (;;)
    {
        if (index >= 10)
        {
            cout << index << endl;
            index -= jump;
        }
        cout << index << endl;
        index -= jump;
        if (index < 4)
        {
            break;
        }
    }
    return 0;

    // Output Needed
    // 10
    // 8
    // 6
    // 4
}