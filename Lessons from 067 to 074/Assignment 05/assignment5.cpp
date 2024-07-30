#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();

  // Write Method One
	it += sizeof(numbers.front());

	// Write Method Two
	advance(it, sizeof(numbers.front()));

	// Write Method Three
	it = numbers.end() - sizeof(numbers.front());

  cout << *it << "\n"; // 50
  return 0;
}