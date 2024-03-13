#include <iostream>
#include <string>
using namespace std;

int maxSubArrayLength(int arr[], int n)
{
    int sum = 0;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}
int minSubArrayLength(int arr[], int n)
{
    int sum = 0;
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else if (sum < min)
        {
            min = sum;
        }
    }
    return min;
}
int main(){
   int arr[] = {3,1,2,4}; 
   cout << maxSubArrayLength(arr,4)<<endl;
   cout << minSubArrayLength(arr,4);
   return false;
} 