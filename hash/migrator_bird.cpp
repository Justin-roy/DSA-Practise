#include <iostream>
#include <string>
#include <vector>
using namespace std;

int migratoryBirds(vector<int> arr)
{
    int size = arr.size();
    vector<int> hash(size, 0);
    for (int index = 0; index < size; index++)
    {
        hash[arr[index]]++;
    }
    int maxi = hash.front();
    int h_size = hash.size();
    int h_index = 0;
    for (int val = 0; val < h_size; val++)
    {
        if (hash[val] > maxi)
        {
            maxi = hash[val];
            h_index = val;
        }
    }

    return arr[h_index];
}

int main()
{
    cout << migratoryBirds({1, 4, 4, 4, 5, 3});
    return false;
}