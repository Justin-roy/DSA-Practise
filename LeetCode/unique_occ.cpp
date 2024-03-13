#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool uniqueOccurrences(vector<int> arr)
{
    unordered_map<int, int> freq;
    unordered_map<int, int> check;

    for (auto x : arr)
    {
        freq[x]++;
    }

    for (auto f : freq)
    {
        int val = f.second;
        if (val != 0)
        {
            check[val]++;
        }
    }

    for (auto f : check)
    {
        int val = f.second;
        if (val > 1)
            return false;
    }

    return true;
}

int main()
{
    cout << uniqueOccurrences({-17, -21, 9, 9, 22, 22, 22, -21, -16, -21, -16, -9, -16, -21, 22, -21, -17, -21, -16, -17, 22});
    return false;
}