#include <iostream>
using namespace std;

int main()
{

    int vals[3][5] = {
        {100, 200, 250, 400, 200},
        {100, 200, 500, 400, 200},
        {100, 200, 600, 400, 200}};

    if (vals[0][0] + vals[0][4] > vals[0][2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[0][0] << " + " << vals[0][4] << " = " << vals[0][0] + vals[0][4] << endl;
        cout << vals[0][0] + vals[0][4] << " > " << vals[0][2] << endl;
    }
    else if (vals[0][1] + vals[0][3] > vals[0][2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
        cout << vals[0][1] << " + " << vals[0][3] << " = " << vals[0][1] + vals[0][3] << endl;
        cout << vals[0][1] + vals[0][3] << " > " << vals[0][2] << endl;
    }
    else
    {
        cout << "Middle Number Is The Largest" << endl;
    }

    if (vals[1][1] + vals[1][4] > vals[1][2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[1][1] << " + " << vals[1][4] << " = " << vals[1][1] + vals[1][4] << endl;
        cout << vals[1][1] + vals[1][4] << " > " << vals[1][2] << endl;
    }
    else if (vals[1][1] + vals[1][3] > vals[1][2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
        cout << vals[1][1] << " + " << vals[1][3] << " = " << vals[1][1] + vals[1][3] << endl;
        cout << vals[1][1] + vals[1][3] << " > " << vals[1][2] << endl;
    }
    else
    {
        cout << "Middle Number Is The Largest" << endl;
    }

    if (vals[2][1] + vals[2][4] > vals[2][2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[2][1] << " + " << vals[2][4] << " = " << vals[2][1] + vals[2][4] << endl;
        cout << vals[2][1] + vals[2][4] << " > " << vals[2][2] << endl;
    }
    else if (vals[2][1] + vals[2][3] > vals[2][2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
        cout << vals[2][1] << " + " << vals[2][3] << " = " << vals[2][1] + vals[2][3] << endl;
        cout << vals[2][1] + vals[2][3] << " > " << vals[2][2] << endl;
    }
    else
    {
        cout << "Middle Number Is The Largest" << endl;
    }
}