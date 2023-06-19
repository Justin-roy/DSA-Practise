#include <iostream>
using namespace std;
string findOcc(string str, string part)
{
    int i = 0;
    int count = 0;
    while (i < str.length())
    {
        if (str[i] == part[i])
            count++;
        // modifie str
        if (count == part.length())
        {
            count = 0;
            i = 0;
        }
        i++;
    }
    return str;
}
void removeOccurrences(string s, string part)
{
    while (s.length() != 0, )
}
int main()
{
    return 0;
}