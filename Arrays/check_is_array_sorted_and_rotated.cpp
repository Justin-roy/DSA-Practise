#include <iostream>
#include <vector>
using namespace std;
bool checkSortedRotated(vector<int> &v)
{
    int count = 0;
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
            count++;
    }
    if (v[n - 1] > v[0])
        count++;

    return count <= 1;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    bool check = checkSortedRotated(v);
    if (check)
        cout << "Rotated Sorted" << endl;
    else
        cout << "Not Rotated Sorted" << endl;

    return 0;
}