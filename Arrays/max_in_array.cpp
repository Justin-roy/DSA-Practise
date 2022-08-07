#include <iostream>
using namespace std;
int FindMaxValue(int maxArray[], int size)
{
    int max = maxArray[0];
    for (int i = 0; i < size; i++)
    {
        if (max < maxArray[i])
            max = maxArray[i];
    }

    return max;
}
int main()
{
    int max[5] = {5, 1, 2, 0, 10};
    int size = sizeof(max) / sizeof(max[0]);
    int maxValue = FindMaxValue(max, size);
    cout << "Maximum Value: " << maxValue << endl;

    return 0;
}