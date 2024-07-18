#include <iostream>
using namespace std;

int main()
{
    int check = 25;
    int nums[3][5] = {
        {40, 20, 30, 70, 100},
        {20, 35, 30, 70, 100},
        {20, 25, 30, 70, 100}
    };


    if (nums[0][0] > check)
    {
        cout << "{" << nums[0][0] << "}" << " + " << "{" << nums[0][3] << "}" << " = " << nums[0][0] + nums[0][3] << endl;
    }


    if (nums[1][1] > check)
    {
        cout << "{" << nums[1][1] << "}" << " + " << "{" << nums[1][3] << "}" << " = " << nums[1][1] + nums[1][3] << endl;
    }

    if (nums[2][2] > check)
    {
        cout << "{" << nums[2][2] << "}" << " + " << "{" << nums[2][3] << "}" << " = " << nums[2][2] + nums[2][3] << endl;
    }

    return 0;

}
