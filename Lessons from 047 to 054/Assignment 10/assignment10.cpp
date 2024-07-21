#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int friends_size = size(friends);
    for (int i = 0; i < friends_size; i++)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << endl;
        }
    }
    cout << "==============\n";
    int i = 0;
    while (i < friends_size)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << endl;
        }
        i++;
    }
    return 0;
    // Output Needed
    // "Ahmed"
    // "Ashraf"
    // "Amany"
}