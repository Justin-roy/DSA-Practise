#include <iostream>
using namespace std;
/*
*****
****
***
**
*
*/
int main()
{
    int patternCount = 5;
    for (int i = 0; i < patternCount; i++)
    {
        for (int j = i; j < patternCount; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}