#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size)
{
    int low = 0, high = size - 1, mid = low + (high - low) / 2;
    cout << "mid: " << mid << endl;
    while (low < high)
    {
        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        mid = low + (high - low) / 2;
    }
    return low;
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int pivot = BinarySearch(arr, 5);
    cout << "Pivot Element is: " << arr[pivot] << " Index: " << pivot;
    return 0;
}