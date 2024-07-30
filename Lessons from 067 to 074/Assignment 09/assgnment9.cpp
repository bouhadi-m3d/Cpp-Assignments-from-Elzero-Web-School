#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  int helperone = 2;
  int helpertwo = 6;

  // Write Your Line Of Code Here
  numbers.erase(numbers.begin() + helperone, numbers.begin() + helpertwo);

  for (int i : numbers) cout << i << "\n";
  return 0;
}

// Needed Output
// 10
// 20
// 70
// 80