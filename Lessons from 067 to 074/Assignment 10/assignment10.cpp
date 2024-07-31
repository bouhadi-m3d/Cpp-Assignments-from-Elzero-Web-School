#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  // Your Code Here To Create Vector
  vector<int> numbers(100, 1000);
  cout << numbers.at(0) << "\n"; // 1000
  cout << numbers.at(99) << "\n"; // 1000
  return 0;
}