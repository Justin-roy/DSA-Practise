#include <iostream>
using namespace std;
long double getPerfectSquareRoot(int val, int tempSol, int precision)
{
    long double ans = tempSol;
    double fact = 1;

    for (double i = 0; i < precision; i++)
    {
        fact /= 10;
        for (long double j = ans; j * j < val; j += fact)
        {
            ans = j;
        }
    }

    return ans;
}
int getSquareRoot(int val)
{
    int s = 0, e = val - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid > val)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int main()
{
    int n = 27;
    int tempAns = getSquareRoot(n);
    cout << "Square Root of " << n << " is: " << tempAns << endl;
    cout << "Perfect Square Root of " << n << " is: " << getPerfectSquareRoot(n, tempAns, 4) << endl;
    return 0;
}