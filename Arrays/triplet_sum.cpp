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
vector<vector<int>> TripletSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> tmp;
                    tmp.push_back(arr[i]);
                    tmp.push_back(arr[j]);
                    tmp.push_back(arr[k]);
                    ans.push_back(tmp);
                }
            }
        }
    }
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
    cout << "Enter Triplet Sum value: ";
    cin >> ps;
    vector<vector<int>> data = TripletSum(A, ps);
    PrintArray(data);
    return 0;
}