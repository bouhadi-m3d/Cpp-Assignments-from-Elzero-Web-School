#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int namesSize = names->size(); 
    for (int i = 0; i <= namesSize; i++)
    {
        if (names[i].size() == 5)
        {
            cout << names[i] << endl;
        }
    }
    // Output Needed
    /*
    "Osama"
    "Ahmed"
    "Hagar"
    "Salwa"
    */
    return 0;
}