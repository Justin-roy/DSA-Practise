#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

long long int calculate(int a[], int n)
{
    long long int count = 0;
    unordered_map<int,int> match;
    for(int i=0; i<n; i++)
     match[a[i]]++;
     
    for(int i=0; i<n; i++)
    {
      if(match[a[i]] > 1)
      {
        // nc2 formula
        int val = match[a[i]];
        count += val*(val-1)/2;
        match.erase(a[i]);
      }
    }
    
    return count;
}
int main(){
    int arr[] = {16 ,19 ,12, 2, 9, 11 ,14, 5 ,13 ,7 ,3 ,18, 14, 2, 2, 8};
   cout << calculate(arr,16);
   return false;
} 