#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1: Using direct indexing
    cout << "First: " << nums[0] << endl;
    cout << "Last: " << nums[nums.size() - 1] << endl;

    // Method 2: Using std::array methods
    cout << "First: " << nums.front() << endl;
    cout << "Last: " << nums.back() << endl;

    // Method 3: Using size() method to get last index dynamically
    int lastIndex = nums.size() - 1;
    cout << "First: " << nums.at(0) << endl;
    cout << "Last: " << nums.at(lastIndex) << endl;

    return 0;
}