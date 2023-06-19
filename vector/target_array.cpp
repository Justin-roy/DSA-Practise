#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{

    vector<int> ans(nums.size(), 0);
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        int idx = index[i];
        int temp = ans[idx];
        int val = nums[i];
        ans[idx] = val;
        PrintVector(ans);
        if (idx + 1 < size)
        {
            int olderVal = ans[idx + 1];
            ans[idx + 1] = temp;
        }
        cout << "After Insert" << endl;
        PrintVector(ans);
    }

    return ans;
}

int main()
{
    // vector<int> nums = {0, 1, 2, 3, 4}, index = {0, 1, 2, 2, 1};
    // createTargetArray(nums, index);
    string sentence = "abc";
    int ascii = sentence[0] - 'a';
    cout << ascii << endl;
    return 0;
}