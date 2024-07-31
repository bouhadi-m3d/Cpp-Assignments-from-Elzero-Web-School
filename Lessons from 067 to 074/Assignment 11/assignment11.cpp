#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers; 
    vector<float> floats(100); 

    // Resize and fill the numbers vector with 1000 in a single line
    numbers.resize(100, 1000);

    // Fill floats with 100.50
    fill(floats.begin(), floats.end(), 100.50f);

    cout << numbers.at(0) << "\n"; // 1000
    cout << numbers.at(99) << "\n"; // 1000

    cout << floats.at(0) << "\n"; // 100.50
    cout << floats.at(99) << "\n"; // 100.50
    
    return 0;
}
