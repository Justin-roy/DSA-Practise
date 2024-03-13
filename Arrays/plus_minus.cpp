#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <iomanip>
using namespace std;
void printPrecisionFixed(double val)
{
   cout<<fixed<<setprecision(6)<<val<<"\n";
}
void plusMinus(vector<int> arr) {
   int size = arr.size(); 
   int positive_count = 0, negative_count = 0, zero_count = 0; 
   for (int val : arr) {
     if(val > 0)
      positive_count++;
     if(val < 0)
      negative_count++;
     if(val == 0)
      zero_count++;    
   } 
   printPrecisionFixed(((double)positive_count/6));
}

int main(){
    plusMinus({-4, 3, -9, 0, 4, 1});
   return false;
} 
