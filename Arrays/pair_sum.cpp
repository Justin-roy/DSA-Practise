#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void PrintArray(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> PairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> tmp;
                tmp.push_back(min(arr[i], arr[j]));
                tmp.push_back(max(arr[i], arr[j]));
                ans.push_back(tmp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> A;
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    int ps;
    cout << "Enter pair value: ";
    cin >> ps;
    vector<vector<int>> data = PairSum(A, ps);
    PrintArray(data);
    return 0;
}