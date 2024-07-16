#include <iostream>
using namespace std;

void my_function(int age, int points)
{
    if (age > 18)
    {
        cout << "Yes Age Is Ok" << endl;
    }
    else
    {
        cout << "No Age Is Not Ok" << endl;
    }

    if (points > 500)
    {
        cout << "Yes Points Are Ok" << endl;
    }
    else
    {
        cout << "No Points Are Not Ok" << endl;
    }
}

int main()
{
    cout << "===============================" << endl;

    // Test Case 1
    int age = 18;
    int points = 450;

    // Output
    // "No Age Is Not Ok"
    // "No Points Is Not Ok"

    my_function(age, points);

    cout << "===============================" << endl;

    // Test Case 2
    int age_two = 20;
    int points_two = 450;

    // Output
    // "Yes Age Is Ok"
    // "No Points Is Not Ok"

    my_function(age_two, points_two);

    cout << "===============================" << endl;

    // Test Case 3
    int age_three = 20;
    int points_three = 650;

    // Output
    // "Yes Age Is Ok"
    // "Yes Points Is Ok"

    my_function(age_three, points_three);

    cout << "===============================" << endl;

    return 0;
}