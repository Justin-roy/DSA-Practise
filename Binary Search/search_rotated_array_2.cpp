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
    // if already rotated
    if (arr[mid] > arr[s] && arr[mid] > arr[e])
        return s;
    // 2s, 2, 2, 3m, 2, 2, 2e
    // 2, 2s, 2, 3, 2m, 2, 2e
    // 2s, 2, 2, 3m, 2, 2, 2e
    // 2s, 2, 2, 3m, 2, 2, 2e

    while (s < e)
    {
        if (arr[mid] < arr[s])
            break;
        if (arr[mid] > arr[e])
            s = mid + 1;
        else if (arr[mid] < arr[e])
            e = mid;
        else
            e--;
        mid = s + (e - s) / 2;
    }
    return s;
}
int RotatedSearch(int arr[], int size, int k)
{
    int pivot = getPivot(arr, size);
    if (k >= arr[pivot] && (k <= arr[size - 1] || k >= arr[size - 1]))
    {
        cout << "If Part" << endl;
        return BinarySearch(arr, pivot, size - 1, k);
    }
    else
    {
        cout << "Else Part" << endl;
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int arr[5] = {1, 0, 1, 1, 1};
    int k = 0;
    cout << getPivot(arr, 5) << endl;
    int ans = RotatedSearch(arr, 5, k);
    if (ans != -1)
    {
        cout << "Rotated Search Element is: " << arr[ans] << " And Index is: " << ans;
    }
    else
    {
        cout << "Not Found: " << ans;
    }

    return 0;
}