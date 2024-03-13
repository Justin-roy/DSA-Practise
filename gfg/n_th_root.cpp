#include <iostream>
#include <string>
using namespace std;

int check(int k, int n, int m)
{
    long long int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= k;
        if (ans > m)
        {
            cout<<ans<<" "<<m<<endl;
            return (2);
        }
    }
    cout<<ans<<" "<<m<<endl;
    if (ans == m)
        return (1);
    return (0);
}

int NthRoot(int n, int m)
{
    int l = 1, r = m;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int ans = check(mid, n, m);
        if (ans == 1)
            return (mid);
        if (ans == 2)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return (-1);
}
int main()
{
    cout <<endl<< NthRoot(3, 9);
    return false;
}