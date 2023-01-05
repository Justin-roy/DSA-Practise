#include <iostream>
using namespace std;
int BinarySearch(int arr[], int st, int ed, int k)
{
    int s = st;
    int e = ed;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (k == arr[mid])
            return mid;
        if (k > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int getPivot(int arr[], int size)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int RotatedSearch(int arr[], int size, int k)
{
    int pivot = getPivot(arr, size);
    if (k >= arr[pivot] && k <= arr[size - 1])
        return BinarySearch(arr, pivot, size - 1, k);
    else
        return BinarySearch(arr, 0, pivot - 1, k);
}
int main()
{
    int arr[5] = {7, 8, 9, 1, 3};
    int k = 3;
    cout << getPivot(arr, 5);
    int ans = RotatedSearch(arr, 7, k);
    if (ans != -1)
    {
        cout << "Rotated Search Element is: " << ans;
    }
    else
    {
        cout << "Not Found: " << ans;
    }

    return 0;
}