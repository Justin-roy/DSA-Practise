#include <iostream>
#include <string.h>
using namespace std;
char toLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c;
    else
    {
        char temp = c - 'A' + 'a';
        return temp;
    }
}
bool check(char c)
{
    // we can use [isalnum] as well. e.g -> isalnum[c]
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return true;
    else
        return false;
}

bool checkPalindrome(string str)
{
    int s = 0, e = str.length() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

bool validPalindrome(string ch)
{
    string tempstr = "";
    // case 1: check valid character and remove
    for (int i = 0; i < ch.length(); i++)
    {
        if (check(ch[i]))
            tempstr.push_back(ch[i]);
    }
    // case 2: convert to smaller case
    for (int j = 0; j < tempstr.length(); j++)
    {
        tempstr[j] = toLowerCase(tempstr[j]);
    }
    // case 3: check valid character
    return checkPalindrome(tempstr);
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    if (validPalindrome(str))
        cout << "Valid palindrome";
    else
        cout << " Not Valid palindrome";

    return 0;
}