#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please Type A Number Between 0 And 150\n";
    cin >> num;

    if (num > 0 && num < 10)
    {
        cout << "00" << num << endl;
    }
    else if (num > 10 && num < 100)
    {
        cout << "0" << num << endl;
    }
    else if (num >= 100 && num <= 150)
    {
        cout << num << endl;
    }
    else 
    {
        cout << "The number you enterd is not between 0 and 15 !!!" << endl;
    }

    // If Number Smaller Than 10 "Example 5" Output Will Be => 005
    // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
    // If Number Larger Than 100 "Example 115" Output Will Be => 115

    return 0;
}