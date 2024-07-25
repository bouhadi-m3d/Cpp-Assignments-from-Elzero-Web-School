#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Write Your Function Here
string swapping(string text)
{
	int textLength = text.length(); 

	for (int i = 0; i < textLength; i++)
	{
		if (text[i] == 'h' || text[i] == 'H')
		{
            continue;
        }
		text[i] = (islower(text[i]) ? toupper(text[i]) : tolower(text[i]));
	}

	return text;
}

int main()
{
  cout << swapping("\nhero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}