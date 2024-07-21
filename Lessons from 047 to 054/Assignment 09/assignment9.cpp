#include <iostream>
using namespace std;

int main()
{
    // For Loop
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            i = i + 1;
        }
        cout << friends[i] << endl;
    }
    cout << "=============\n";
    // While Loop
    int i = 1;
    while (i < 3)
    {
        cout << friends[i] << endl;
        i++;
    }
    return 0;

    // Output Needed
    // "Mohamed"
    // "Sayed"
}