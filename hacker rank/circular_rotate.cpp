#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void rotateArray(vector<int> &arr)
{
    // 1 2 3 4 5
    int last = arr.back();
    int size = arr.size();
    for (int i = size - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;
}
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int size = a.size();
    if (k >= a.size())
        k = size % k;
    while (k > 0)
    {
        rotateArray(a);
        k--;
    }
    // updating queries
    int q_size = queries.size();
    for (int index = 0; index < q_size; index++)
    {
        queries[index] = a[queries[index]];
    }

    for (int val : queries)
        cout << val << " ";
    cout << endl;
    return queries;
}

int main()
{
    circularArrayRotation({1 ,2, 3},100,{0,1,2});
    // cout << 3 % 3;
    return false;
}