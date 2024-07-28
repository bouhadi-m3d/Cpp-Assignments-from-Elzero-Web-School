#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int phonescount, int usedphonescount, int newphoneprice, int taxpercentage)
{
    int newphonsecount = phonescount - usedphonescount;
    int usedphoneprice = newphoneprice - 200;

    int newphonesGain = newphonsecount * newphoneprice;
    int usedphonesGain = usedphonescount * usedphoneprice;

    int totalGain = newphonesGain + usedphonesGain;

    int discountedGain = totalGain - totalGain * (taxpercentage * 0.01);
    return discountedGain;
}
int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}