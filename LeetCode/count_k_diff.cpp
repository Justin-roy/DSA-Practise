#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int countKDifference(vector<int> nums, int k)
{
    // a + b = k
    // a + nums[i] = k
    // a = k - nums[i]

    vector<int> hm(101, 0);
    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        hm[nums[i]]++;
    }

    for (int i = k; i < 101; i++)
    {
        result += hm[i] * hm[i - k];
    }

    return result;
}
int main()
{
    cout << countKDifference({1,2,2,1}, 1);
    return false;
}