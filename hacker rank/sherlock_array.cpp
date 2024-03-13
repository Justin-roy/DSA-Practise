#include <iostream>
#include <string>
#include <vector>
using namespace std;
string balancedSums(vector<int> arr)
{
    int size = arr.size();
    int lsum = 0;
    int rsum = 0;
    int total = 0;
    for (int val : arr)
    {
        total += val;
    }
    for (int i = 0; i < size; i++)
    {
        rsum = total - arr[i];
        lsum = total - (rsum + arr[i]);
        if (lsum == rsum)
            return "YES";
    }

    return "NO";
}
string balancedSums2(vector<int> arr)
{
    // brute force approach

    int size = arr.size();
    int lsum = 0;
    int rsum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            lsum = 0;
        else
            lsum += arr[i - 1];
        for (int j = i + 1; j < size; j++)
        {
            rsum += arr[j];
        }
        if (lsum == rsum)
            return "YES";
        else
            rsum = 0;
    }

    return "NO";
}
int main()
{
    cout << balancedSums({1, 2, 3, 3});
    return false;
}