#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int a, int b)
{
    cout << pow(a, b) << endl;


	int power = a;

	while (b > 1)
	{
		b--;
		power *= a;
	}
    cout << power << endl;
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}