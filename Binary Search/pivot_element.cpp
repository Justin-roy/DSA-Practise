#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size)
{
    int low = 0, high = size - 1, mid = low + (high - low) / 2;
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
    return high;
}
int main()
{
    int arr[6] = {1, 5, 13, 18, 3, 6};
    int pivot = BinarySearch(arr, 7);
    cout << "Pivot Element is: " << arr[pivot] << " Index: " << pivot;
    return 0;
}