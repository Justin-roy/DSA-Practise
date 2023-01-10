#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCow(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0, e, mid, ans = -1;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    e = maxi;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    vector<int> num;
    cout << "Enter the Size of the Vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    cout << "Aggressive Cow Maxi Distance is: " << aggressiveCow(num, 2);
    return 0;
}