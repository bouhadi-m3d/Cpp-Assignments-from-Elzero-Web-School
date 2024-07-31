#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> firstnumbers = { 10, 30, 50, 70 };
  vector<int> secondnumbers = { 20, 40, 60, 80 };
  vector<int> allnumbers = firstnumbers;
  allnumbers.insert(allnumbers.end(), secondnumbers.begin(), secondnumbers.end());
  sort(allnumbers.begin(), allnumbers.end());
  for (int i : allnumbers)
  {
    cout << i << "\n";
  }
  return 0;
}

// Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80