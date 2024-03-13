#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s)
{
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
   return s; 
}

int main()
{
    cout << toLowerCase("JustIn");
    return false;
}