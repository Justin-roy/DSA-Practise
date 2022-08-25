#include <iostream>
using namespace std;
/*
1
22
333
4444
55555
*/
int main()
{
    int patternCount = 5;
    for (int i = 0; i < patternCount; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}