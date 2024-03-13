#include <iostream>
#include <string>
using namespace std;

string dayOfProgrammer(int year) {
  // not having feburary
  int sevenMonth = 31 + 31 + 30 + 31 + 30 + 31 + 31;
  // this is leap year
  // julia calender
  if(year == 1918) sevenMonth += 15;
  else if(year <= 1917 && year % 4 == 0 ){
      sevenMonth += 29; 
  }
  // gregorian calender
  else if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
      sevenMonth += 29; 
  }
  else{
      sevenMonth += 28;
  }
  
  int diff = 256 - sevenMonth;
  
  string d = to_string(diff);
  string m = "09";
  string y = to_string(year);
  string date = d + "." + m + "." + y;
  
  return date; 
}

int main(){
   cout << dayOfProgrammer(1918);
   return false;
} 