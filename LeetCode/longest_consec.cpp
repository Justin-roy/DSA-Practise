#include <iostream>
#include <string>
#include <vector>
using namespace std;
int longestConsecutive(vector<int> nums)
{
    // first traverse and get freq of each element
    // second in hash if freq == 0 then break and tell count
    int size = nums.size();
    int hash[1000] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[nums[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (hash[i] > 0)
            cnt++;
    }

    return cnt;
}

int main()
{
    cout << longestConsecutive({100, 4, 200, 1, 3, 2});
    return false;
}