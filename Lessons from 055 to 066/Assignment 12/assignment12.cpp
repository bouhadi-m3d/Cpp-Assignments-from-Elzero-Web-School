#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string doamin, string tld, bool www = true)
{
    string url = protocol + "://";
    if (www) {
        url += "www.";
    }
    url += doamin + "." + tld;
    return url;
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}