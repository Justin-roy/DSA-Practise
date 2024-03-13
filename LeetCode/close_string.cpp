#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool closeStrings(string word1, string word2)
{
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);
    int size = word1.length();

    if (size != word2.length())
        return false;

    for (char ch : word1)
        freq1[ch - 'a']++;
    for (char ch : word2)
        freq2[ch - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0))
        {
            return false;
        }
    }

    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << closeStrings("cabbba", "aabbss");
    return false;
}