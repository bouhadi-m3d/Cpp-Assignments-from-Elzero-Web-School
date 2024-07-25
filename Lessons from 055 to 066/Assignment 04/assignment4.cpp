#include <iostream>
using namespace std;

// Your Function Here
int calculation(int numOne = 100, int numTwo = 50, int numThree = 150)
{
    return numOne + numTwo + numThree;
}

int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
}