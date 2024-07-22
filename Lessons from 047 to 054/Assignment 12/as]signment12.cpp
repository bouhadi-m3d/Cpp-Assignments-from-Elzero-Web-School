#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
    int numsSize = size(nums);
    int i = 0;
    while (i < numsSize)
    {
        if (nums[i] * 2 == nums[i + 1])
        {
            cout << nums[i] << endl;
        }
        i++;
    }
    return 0;   
}