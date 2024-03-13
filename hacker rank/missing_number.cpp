#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int findQ(int d, int r, int val)
{

    int q = (val - r) / d;
    return q;
}
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    int br_size = brr.size();
    int ar_size = arr.size();
    unordered_map<int, int> umap;

    for (int index = 0; index < br_size; index++)
    {
        umap[brr[index]]++;
    }
    for (int index = 0; index < ar_size; index++)
    {
        umap[arr[index]]--;

        if (umap[arr[index]] == 0)
            umap.erase(arr[index]);
    }

    vector<int> ans;
    for (auto &&i : umap)
    {
        ans.push_back(i.first);
    }
    sort(ans.begin(), ans.end());

    return ans;
}
vector<int> missingNumbers2(vector<int> arr, vector<int> brr)
{
    int br_size = brr.size();
    int ar_size = arr.size();
    vector<int> br_hash(br_size, 0);

    for (int index = 0; index < br_size; index++)
    {
        int val = brr[index];
        int idx = val % br_size;
        br_hash[idx]++;
    }
    for (int index = 0; index < ar_size; index++)
    {
        int val = arr[index];
        int idx = val % br_size;
        br_hash[idx]++;
    }
    vector<int> ans;
    for (int index = 0; index < br_size; index++)
    {
        int val = brr[index];
        int idx = val % br_size;
        if (br_hash[idx] % 2 != 0)
        {
            ans.push_back(val);
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
    vector<int> brr = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};
    missingNumbers(arr, brr);
    cout << endl;

    // for (auto &&i : brr) cout<<i%12<<" ";

    return false;
}