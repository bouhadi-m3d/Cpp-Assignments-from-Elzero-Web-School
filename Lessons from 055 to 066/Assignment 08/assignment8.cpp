#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numSize)
{
    int evenNums = 0;
    int oddNums = 1;
    for (int i = 0; i < numSize; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNums += numbers[i];
        }
        else
        {
            oddNums *= numbers[i];
        }
    }
    return evenNums + oddNums;
}

int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}