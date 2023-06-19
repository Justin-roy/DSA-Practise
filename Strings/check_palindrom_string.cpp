#include <iostream>
using namespace std;
char toUpperCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c;
    else
    {
        char temp = c - 'a' + 'A';
        return temp;
    }
}
bool check(char c)
{
    // we can use [isalnum] as well. e.g -> isalnum[c]
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return false;
    else
        return true;
}
bool checkPalindrome(char c[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        if (check(c[s]))
        {
            s++;
        }
        else if (check(c[e]))
        {
            e--;
        }
        else if (toUpperCase(c[s]) != toUpperCase(c[e]))
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
int main()
{
    char s[6] = {'N', ' ', 'o', 'o', 'n', '*'};
    if (checkPalindrome(s, 6))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}