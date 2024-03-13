#include <iostream>
#include <string>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    int count = 0, maxi = 0;

    for (int val : candles)
    {
        maxi = max(maxi,val);
    }
    for (int val : candles)
    {
       if(maxi == val)
       count++;
    }
    return count;
}

int main()
{
    cout << birthdayCakeCandles({18, 90, 90, 13, 90, 75, 90, 8, 90, 43});
    return false;
}