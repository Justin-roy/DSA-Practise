#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> permutationEquation(vector<int> p)
{
    int size = p.size();
    vector<int> ans;
    map<int, int> mp;

    for (int index = 0; index < size; index++)
    {
        mp[p[index]] = index + 1;
    }
    for (int index = 1; index <= size; index++)
    {
        int x = mp[index];
        int x2 = mp[x];
        ans.push_back(x2);
    }

    return ans;
}

int main()
{
    permutationEquation({2, 3, 1});
    return false;
}