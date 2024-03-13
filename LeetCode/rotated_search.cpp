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
    // compare with first element to find pivot
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == tar)
        {
            return mid;
        }
        else if (tar > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int search(vector<int> nums, int target)
{
    if (nums.size() == 1)
        return nums[0] == target ? 0 : -1;
    // first find pivot index

    int pIdx = pivot(nums, 0, nums.size() - 1);
    bool check = (target >= nums[pIdx] && target <= nums[nums.size() - 1]);
    return check ? bst(nums, pIdx, nums.size() - 1, target) : bst(nums, 0, pIdx - 1, target);
}
int main()
{
    cout << search({1, 3}, 1);
    return false;
}