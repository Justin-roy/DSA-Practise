#include <iostream>
#include <vector>
using namespace std;
// m -> postion to reverse
void reverse_vector(vector<int> &v, int m)
{
    // +1 because we need swap after
    int s = m + 1, e = v.size() - 1;
    while (s <= e)
    {
        swap(v.at(s), v.at(e));
        s++;
        e--;
    }
}
void PrintArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(9);
    v.push_back(10);
    cout << "Before reverse vector: ";
    PrintArray(v);
    cout << "After reverse vector: ";
    reverse_vector(v, 2);
    PrintArray(v);
    return 0;
}