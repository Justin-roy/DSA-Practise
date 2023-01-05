#include <iostream>
using namespace std;
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
    cout << "Square Root of " << n << " is: " << getSquareRoot(n) << endl;
    return 0;
}