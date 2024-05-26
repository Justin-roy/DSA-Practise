#include <iostream>
using namespace std;
void PrintPatter10(int n)
{
    int count = (2 * n) - 1;
    for (int row = 1; row <= count; row++)
    {
        int colCount = row > n ? count - row + 1 : row;

        int noOfSpaces = n - colCount;

        for (int space = 1; space <= noOfSpaces; space++)
        {
            cout << " ";
        }

        for (int col = 1; col <= colCount; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
int main()
{
    PrintPatter10(5);
    return 0;
}