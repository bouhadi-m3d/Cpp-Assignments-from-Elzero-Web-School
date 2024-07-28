#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smallBooks, int middleBooks, int bigBooks, int shelves)
{
    int totalspace = (smallBooks * 2) + (middleBooks * 4) + (bigBooks * 6);
    int remainingSpace = (shelves * 20) - totalspace;
    return (remainingSpace > 0 ? remainingSpace : 0);
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}