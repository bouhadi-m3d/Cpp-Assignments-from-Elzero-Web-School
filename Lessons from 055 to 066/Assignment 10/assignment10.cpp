#include <iostream>
#include <climits>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numssize)
{
    int min = INT_MAX;
    for (int i = 0; i < numssize; i++)
    {
        if (numbers[i] > 0 && numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    return min;
}

int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
}