#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int numone, int numtwo, string op = "")
{
    int result = 0;
    if (op == "a" || op == "")
    {
        result = numone + numtwo;
    }
    else if (op == "subtract" || op == "s")
    {
        result = numone - numtwo;
    }
    else if (op == "multiply" || op == "m")
    {
        result = numone * numtwo;
    }
    else
    {
        result;
    }
    return result;
}
int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}