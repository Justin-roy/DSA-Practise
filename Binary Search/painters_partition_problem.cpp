#include <iostream>
using namespace std;
// n denotes number of sizeofArrayList
// k denotes number of painters
bool isPossible(int arr[], int n, int k, int mid)
{
    int count = 1;
    int painterSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (painterSum + arr[i] <= mid)
        {
            painterSum += arr[i];
        }
        else
        {
            count++;
            if (count > k || arr[i] > mid)
            {
                return false;
            }
            painterSum = arr[i];
        }
    }

    return true;
}
int findLargestMinDistance(int arr[], int n, int k)
{
    int s = 0, sum = 0, e, mid, ans = -1;
    // finding sum
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    e = sum;
    mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int nPainters = 2;
    cout << findLargestMinDistance(arr, size, nPainters);
    return 0;
}