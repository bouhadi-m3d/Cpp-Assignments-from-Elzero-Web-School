#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector <float> floats = { 1.5, 3.5, 5.5 };
  vector <int> numbers{ 10, 20, 30, 40, 50, 60, 70, 80 };
  vector <double> doubles;
  vector <float>::iterator it;

  it = floats.begin() + 2;
  auto last = numbers.end() - 1;
  doubles.push_back(10);

  cout << *it << "\n"; // 5.5
  cout << *last << "\n"; // 80
  cout << doubles.at(0) << "\n"; // 10

  return 0;
}