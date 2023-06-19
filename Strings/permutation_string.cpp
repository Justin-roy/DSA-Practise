#include <iostream>
using namespace std;
int getIndex(string s, int index)
{
    if (index >= s.length())
        return s.length() - 1 % index;
    return index;
}
string reverseString(string s)
{

    int start, end;
    start = 0;
    end = s.length() - 1;
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
bool PermutationString(string s1, string s2)
{
    string temp = reverseString(s1);

    for (int i = 0; i < s2.length(); i++)
    {
        if (((i + 1) < s2.length()) && (s1[getIndex(s1, i)] == s2[i]) && (s1[getIndex(s1, i + 1)] == s2[i + 1]))
        {
            return true;
        }
        if (((i + 1) < s2.length()) && (temp[getIndex(temp, i)] == s2[i]) && (temp[getIndex(temp, i + 1)] == s2[i + 1]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t = 0 % 2;
    cout << t;
    // cout << PermutationString("ab", "eidbaooo") << endl;
    return 0;
}