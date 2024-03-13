#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> applyOperations(vector<int> nums)
{
    // 1. match them -> i == i+1.
    // 2. then if match -> i*2 and i+1 = 0.
    // 3. else skip if not match.
    // 4. shift all zeros to right side.
    int size = nums.size();
    if (size == 0 || size == 1)
        return nums;
    for (int index = 0; index < size - 1; index++)
    {
        if (nums[index] == nums[index + 1])
        {
            nums[index] = nums[index] * 2;
            nums[index + 1] = 0;
        }
    }
    // shifting
    int p = 0; // p-> tracking zero
    for (int i = 0; i < size; i++)
    {
        if (nums[i])
        {
            swap(nums[i], nums[p++]);
        }
    }
    return nums;
}

int main()
{
    applyOperations({847, 847, 0, 0, 0, 399, 416, 416, 879, 879, 206, 206, 206, 272});
    return false;
}