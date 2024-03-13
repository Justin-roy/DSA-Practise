#include <iostream>
#include <string>
using namespace std;

bool isValid(string s)
{

    int size = s.length();
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if ('(' == s[i])
        {
            if (i + 1 < size && (s[i + 1] == ')'))
            {
                flag = true;
                i = i + 1;
            }
        }
        else if ('[' == s[i])
        {
            if (i + 1 < size && (s[i + 1] == ']'))
            {
                flag = true;
                i = i + 1;
            }
        }
        else if ('{' == s[i])
        {
            if (i + 1 < size && (s[i + 1] == '}'))
            {
                flag = true;
                i = i + 1;
            }
        }
        else
        flag = false;
    }
    return flag;
}

int main()
{
    cout << isValid("{[]}");
    return false;
}