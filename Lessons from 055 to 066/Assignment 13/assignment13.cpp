#include <iostream>
#include <string>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "")
{
    string hello = "Hello ";
    if (gender == "Male")
    {
        hello += "Mr ";
    }
    else if ( gender == "Female")
    {
        hello += "Miss ";
    }
    else
    {
        hello;
    }
    return hello + name; 
}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}