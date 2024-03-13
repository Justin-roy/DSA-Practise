#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pivot(vector<int> &arr, int s, int e)
{
    int mid;
    // compare with first element to find pivot
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int bst(vector<int> &arr, int s, int e, int tar)
{
    int mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (s == e)
            return s;
        // right side
        // [mid ^ 1] logic behind is even ^ 1 = increment by one
        //                           odd  ^ 1 = decrement by one
        // conculsion - agar mid even rha toh mid+1 se check karega
        // else mid-1 se check karega
        if (arr[mid] == arr[mid ^ 1])
        {
            s = mid + 1;
        }
        // left side
        else
        {
            e = mid;
        }
    }
    return -1;
}
int search2(vector<int> nums, int target)
{
    if (nums.size() == 1)
        return nums[0] == target ? 0 : -1;
    // first find pivot index

    int pIdx = pivot(nums, 0, nums.size() - 1);
    int index =  bst(nums, pIdx, nums.size() - 1, target);

    return nums[index] == target ? true : false;

}
int main()
{
    cout << search2({1,0,1,1,1}, 0);
    return false;
}