#include <iostream>
using namespace std;
int cutRod(int price[], int n)
{
    int i = 0;
    int maxi = 0;
    while (i < n)
    {
        int firstCut = price[i];
        int idx = n - (i + 1);

        int secondCut = price[idx == 0 ? idx : idx - 1];
        int tmax = firstCut + secondCut;
        maxi = max(maxi, tmax);

        i++;
    }

    // cutting into 8 pieces
    int mul = n * price[0];
    maxi = max(maxi, mul);
    return maxi;
}

int main()
{
    int Price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    cout << cutRod(Price, 8);
    return 0;
}