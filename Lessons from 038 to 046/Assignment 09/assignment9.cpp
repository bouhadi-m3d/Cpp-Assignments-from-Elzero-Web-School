#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums) / sizeof(nums[0]) << endl;

    // Method 2
    cout << nums.size() << endl;
    
    // Method 3
    cout << nums.end() - nums.begin() << endl;

    return 0;
}