#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;
// 1 2 3
// 0 1 2
// 1 3 6
int main()
{
    int n, q;
    cin >> n;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    vector<ll> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l++;
        r++;
        cout << prefixSum[r] - prefixSum[l - 1] << "\n";
    }
    return false;
}