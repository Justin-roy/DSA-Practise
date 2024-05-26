#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int minimizeDifference(int n, int k, vector<int> &arr)
{
    vector<int> ans;
    int diff = n - k;
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < (diff+i); k++)
        {
            sol = abs(sol - arr[k]);
        }
        ans.push_back(sol);
        sol = 0;
    }

    int min = *min_element(ans.begin(), ans.end());

    return min;
}
int main()
{
    vector<int> arr = {2,3,1,4,5,6};
    cout << minimizeDifference(6, 3, arr);
    return false;
}