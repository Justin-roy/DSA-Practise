#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int pickingNumbers(vector<int> a) {
   // 1 3 3 4 5 6  
   // for subarray 
   sort(a.begin(),a.end());
   
   int maxi = 0;
   int count = 0;
   int size = a.size();
   for (int index = 0; index < size; index++) {
     if(index + 1 > size) break;
     int first = a[index];
     int second = a[index+1];
     if(second - first <= 1)
     {
        count++; 
     }
   }
   
   return count; 
  
} 

int main(){
   cout << pickingNumbers({4, 6, 5, 3, 3, 1});
   return false;
} 