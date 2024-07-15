#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    auto E = d - a;
    auto W = d + c;
    auto S = b + d;

    cout << char(E) << char(W) << char(S) << endl;

    return 0;
}