#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &v1, int m, vector<int> &v2, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (v1[i] < v2[j])
        {
            i++;
        }
        else if (v1[i] == v2[j])
        {
            v1.insert(v1.begin() + i, v2[j]);
            i++;
            j++;
        }
        else
        {
            swap(v2[j++], v1[i++]);
        }
    }
    while (i < m)
    {
        v1[i++] = v2[j++];
    }
    while (j < n)
    {
        v1[i++] = v2[j++]; //
    }

    return v2;
}
vector<int> mergeSortedArray(vector<int> &v1, int m, vector<int> &v2, int n)
{
    if (m == 0)
    {
        return v2;
    }
    if (n == 0)
    {
        return v1;
    }
    return merge(v1, m, v2, n);
}
void PrintArray(vector<int> A)
{
    for (auto &&i : A)
    {
        cout << i << " ";
    }

    cout << endl;
}
int main()
{
}

void QuestionTwo()
{
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);
    int m = 3, n = 3;
    vector<int> t = mergeSortedArray(v1, m, v2, n);
    PrintArray(t);
}
void QuestionOne()
{
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(10);
    v1.push_back(12);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);
    // vector<int> t = mergeSortedArray(v1, v2);
    // PrintArray(t);
}