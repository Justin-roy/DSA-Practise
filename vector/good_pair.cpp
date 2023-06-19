#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{

    int i, j, size, good_pair_count = 0;
    size = nums.size();
    i = 0, j = size - 1;

    while (i < size - 1)
    {
        // case 1
        if (j == i + 1)
        {
            j = size - 1;
            i++;
        }

        // case 2
        if (nums[i] == nums[j])
        {
            good_pair_count++;
            j--;
            if (j == i + 1)
            {
                j = size - 1;
                i++;
            }
        }
    }

    return good_pair_count;
}

void numIdenticalPairs2(vector<int> &nums)
{
    // HashMap Approach
    int good_pair_count = 0, size = nums.size();
    int hash[size] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[nums[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (hash[i] > 1)
        {
            cout << hash[i] << " " << endl;
        }
    }
    cout << good_pair_count - 1;
}
void PrintVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums{8, 1, 2, 2, 3};
    // cout << numIdenticalPairs(nums);
    return 0;
}