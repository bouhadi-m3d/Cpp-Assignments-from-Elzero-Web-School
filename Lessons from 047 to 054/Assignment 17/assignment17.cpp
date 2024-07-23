#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 102; i++)
    {
        if (i > 20 && i < 100)
		{
            continue;
        }
        if (i < 10)
        {
            cout << "00";
        }
        else if (i <= 20)
        {
            cout << "0";
        }
        cout << i << endl;
    }
    
    return 0;
}