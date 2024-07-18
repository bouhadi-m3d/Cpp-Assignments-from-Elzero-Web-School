#include <iostream>
using namespace std;

int main()
{
    // Example 1
    int vals1[5] = {100, 200, 600, 200, 100};
    int length1 = sizeof(vals1) / sizeof(vals1[0]);

    if (length1 == 5)
    {
        if (vals1[0] == vals1[4] && vals1[1] == vals1[3])
        {
            cout << "Array Is Palindrome" << endl;
        }
        else
        {
            cout << "Array Is Not Palindrome" << endl;
        }
    }

    // Output
    // "Array Is Palindrome"

    // Example 2
    int vals2[] = {100, 200, 200, 100};
    int length2 = sizeof(vals2) / sizeof(vals2[0]);

    if (length2 == 4)
    {
        if (vals2[0] == vals2[3] && vals2[1] == vals2[2])
        {
            cout << "Array Is Palindrome" << endl;
        }
        else
        {
            cout << "Array Is Not Palindrome" << endl;
        }
    }

    // Output
    // "Array Is Palindrome"

    // Example 3
    int vals3[] = {100, 300, 600, 200, 100};
    int length3 = sizeof(vals3) / sizeof(vals3[0]);

    if (length3 == 5)
    {
        if (vals3[0] == vals3[4] && vals3[1] == vals3[3])
        {
            cout << "Array Is Palindrome" << endl;
        }
        else
        {
            cout << "Array Is Not Palindrome" << endl;
        }
    }
    // Output
    // "Array Is Not Palindrome"
}