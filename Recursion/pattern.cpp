/*
4 4444
3 444
2 33
1 3
*/

#include <iostream>
using namespace std;
void PrintReversePattern(int n)
{
    // base
    if (n <= 1)
    {
        cout << n << " " << endl;
        return;
    }
    for (int i = 0; i < n; i++)
        cout << n << " ";
    cout << endl;
    PrintReversePattern(n - 1);
}
void PrintReversePattern2(int n)
{
    // base
    if (n <= 1)
    {
        cout << n << " " << endl;
        return;
    }
    PrintReversePattern2(n - 1);
    for (int i = 0; i < n; i++)
        cout << n << " ";
    cout << endl;
}
int main()
{
    int a = 5;
    PrintReversePattern(a);
    cout << "After" << endl;
    PrintReversePattern2(a);

    return 0;
}