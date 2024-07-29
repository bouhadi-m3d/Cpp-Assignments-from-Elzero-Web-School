#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {100, 200, 300, 400};
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    nums.push_back(500);

    cout << "First Elemnt is: " << nums.front() << endl;
    cout << "Last Element is: " << nums.back() << endl;
    return 0;
}