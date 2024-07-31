#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Write Your Function 
int add(const vector<int>& numbers) {
    int sum = 0;
    for (int number : numbers) {
        sum += number;
    }
    return sum;
}

int main()
{
  vector<int> numbersone = { 10, 20, 30 };
  vector<int> numberstwo = { 5, 15, 25 };

  cout << add(numbersone) << "\n"; // 60
  cout << add(numberstwo) << "\n"; // 45

  return 0;
}