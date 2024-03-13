#include <iostream>
#include <string>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
    
   long long sum = 0;
   int maxi = arr.front();
   int mini = arr.front();
   for (int val : arr) {
      sum += val; 
      maxi = max(maxi,val);
      mini = min(mini,val);
   } 
  cout << sum - maxi <<" "<< sum - mini;
}

int main(){

   miniMaxSum({256741038, 623958417, 467905213, 714532089, 938071625});
   return false;
} 