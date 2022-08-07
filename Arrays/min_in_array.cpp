#include <iostream>
using namespace std;
int FindMinValue(int minArray[], int size)
{
    int min = minArray[0];
    for (int i = 0; i < size; i++)
    {
        if (min > minArray[i])
            min = minArray[i];
    }

    return min;
}
int main()
{
    int min[5] = {5, 1, 2, 0, 10};
    int size = sizeof(min) / sizeof(min[0]);
    int minValue = FindMinValue(min, size);
    cout << "Minimum Value: " << minValue << endl;

    return 0;
}