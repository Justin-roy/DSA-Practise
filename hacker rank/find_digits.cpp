#include <iostream>
#include <string>
using namespace std;

int findDigits(int n) {
 int divCount = 0;
 int n_size = n;
 while(n != 0) {
   int rem = n % 10;
   if(n_size % rem == 0) divCount++;
   n /= 10;
 } 
 return divCount;
}

int main(){
   cout << findDigits(1012);
   return false;
} 