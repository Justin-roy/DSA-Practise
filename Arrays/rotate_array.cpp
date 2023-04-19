#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
vector<int> RotateArray(vector<int> &v, int k)
{
    int i = 0;
    int n = v.size();
    while (i < n - 1)
    {
        int pos = (i + k) % n;
        int olderVal = v[pos];
        v[pos] = v[i];
        i++;
        PrintArray(v);
    }
    return v;
}
vector<int> RotateArray2(vector<int> &v, int k)
{
    int i = 0;
    int n = v.size();
    vector<int> temp(n);
    while (i < n)
    {
        int pos = (i + k) % n;
        temp[pos] = v[i];
        i++;
    }
    return temp;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k = 3;
    RotateArray2(v, k);
    PrintArray(v);

    return 0;
}