#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
    int size = s.length();
    int hash[26] = {0};
    for (int i = 0; i < size; i++)
    {
        int ascii = s[i] - 'a';
        hash[ascii]++;
    }
    for (int i = 0; i < 26; i++)
    {
       int ascii = s[i] - 'a';
       if (hash[ascii] == 1) return i;
    }
    return -1;
}

int main()
{
    cout<<firstUniqChar("turtle");
    return false;
}