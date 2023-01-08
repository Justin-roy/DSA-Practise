#include <iostream>
using namespace std;
// n denotes number of books
// m denotes number of student
bool isPossible(int arr[], int n, int m, int mid)
{
    int stCount = 1;
    int pgSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pgSum + arr[i] <= mid)
        {
            pgSum += arr[i];
        }
        else
        {
            stCount++;
            if (stCount > m || arr[i] > mid)
            {
                return false;
            }
            pgSum = arr[i];
        }
    }

    return true;
}
int bookAllocate(int arr[], int n, int m)
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
        if (isPossible(arr, n, m, mid))
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
    int arr[4] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int nBooks = size;
    int nStudents = 2;
    cout << bookAllocate(arr, nBooks, nStudents);
    return 0;
}