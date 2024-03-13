#include <iostream>
#include <string>
using namespace std;

int findClosest(int arr[], int n, int target)
{
    // Complete the function
    int ans = INT_MAX; // find minimum
    int res = INT_MIN; // find msximum
    for (int i = 0; i < n; i++)
    {
        int diff = abs(target - arr[i]);
        if (diff <= ans)
        {
            ans = diff;   // diff
            res = arr[i]; // actual value
        }
    }
    return res;
}

int findClosest2(int arr[], int n, int target)
{
    // Complete the function
    int ans = INT_MAX; // find minimum
    int res = INT_MIN; // find msximum
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        int diff = abs(target - arr[mid]);
        if (diff <= target)
        {
            res = arr[mid]; // actual value
            e = mid - 1;
        }
        else
        {
            if (mid == 0)
                return 0;
            else
                s = mid + 1;
        }
    }
    return res;
}

int leastGreatest(int l, int r, int arr[], int target)
{
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= target)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
int findClosest3(int arr[], int n, int target)
{
    // Complete the function
    int lbound = leastGreatest(0, n - 1, arr, target);
    bool check = arr[lbound] - target > target - arr[lbound - 1];
    if (lbound > 0 and check)
        lbound = lbound - 1;
    return arr[lbound];
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 5, 5, 5, 7, 7, 7, 11, 11, 13, 17, 18, 18, 1, 9};
    cout << findClosest3(arr, 20, 3);
    return false;
}