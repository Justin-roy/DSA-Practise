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
bool checkPalindrome(char c[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        if (toUpperCase(c[s]) != toUpperCase(c[e]))
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
    char s[4] = {'N', 'o', 'o', 'n'};
    if (checkPalindrome(s, 4))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}