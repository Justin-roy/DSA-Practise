#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int divisibleSumPairs2(int n, int k, vector<int> ar) {
    map<int, int> mp;
    for(int i = 0; i < ar.size(); i++){
        mp[ar[i] % k]++;
    }
    int result = 0;
     for(int i = 0; i <= k/2; i++){
        if(i == 0 || i*2 == k) result += (mp[i] * (mp[i] - 1)) / 2;
        else result += mp[i] * mp[k - i]; 
    }
    return result;
}

int divisibleSumPairs(int n, int k, vector<int> ar) {
   int count = 0;
   for (int i = 0; i<n; i++) {
     for (int j=i+1; j<n ; j++) {
       int sum = ar[i]+ar[j];
       if(sum % k == 0)
        count++;
     }
   }
   
   return count;
}

int main(){
   cout << divisibleSumPairs2(6,3,{1, 3, 2, 6, 1, 2});
   return false;
} 