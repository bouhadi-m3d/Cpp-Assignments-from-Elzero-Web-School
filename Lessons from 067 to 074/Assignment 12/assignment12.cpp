#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40 };

  // Method One
  // numbers.pop_back();

  // Method Two
  // numbers.erase(numbers.end());

  // Method Three
  numbers.resize(numbers.size() - 1);

  // Do Not Edit
  for (int i : numbers)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 10
// 20
// 30