#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                            int q)
  {

    vector<int> ans;
    vector<int> freq(100001, 0);

    for (int i = 0; i < n; i++)
      freq[b[i]]++;

    for (int i = 1; i < freq.size(); i++)
      freq[i] += freq[i - 1];

    for (int i = 0; i < q; i++)
    {
      int index = query[i];
      int value = a[index];
      ans.push_back(freq[value]);
    }

    return ans;
  }
};

int main()
{

  Solution s;

  vector<int> a = {1, 1, 5, 5};
  vector<int> b = {0, 1, 2, 3};
  int n = 4;
  vector<int> query = {0, 1, 2, 3};
  int q = 4;

  vector<int> temp = s.countElements(a, b, n, query, q);
  for (auto &a : temp)
    cout << a << " ";
  return false;
}