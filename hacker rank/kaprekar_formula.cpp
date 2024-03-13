#include <iostream>
#include <string>
using namespace std;

void kaprekarNumbers(int p, int q)
{
  // flag for checking (if no kaprekar exits return INVALID RANGE)  
  bool flag = true;
  // skipping p = 1 beacause 1 is k.n 
  if (p == 1)
  {
    cout << p++ << " ";
  }
  
  // iteration here
  for (int index = p; index <= q; index++)
  {
    // getting r length where d digit long.
    int rlen = to_string(index).length();
    // typecasting here beacause of overflow integer (e.g 82656*82656)
    long long sq = static_cast<long long>(index) * index;
    // getting final length after square to seprate digits
    string digits = to_string(sq);
    // finding left side length
    int l_len = digits.length() - rlen;
    // sepration here
    string l = "";
    string r = "";
    int i = 0;
    for (; i < l_len; i++)
      l += digits[i];
    for (; i < digits.length(); i++)
      r += digits[i];
    
    //checking if l or r is empty
    if (!(l.empty()) && !(r.empty()))
    {
      int l_int = stoi(l);
      int r_int = stoi(r);

      int sum = l_int + r_int;
      // now compare.
      if (sum == index)
      {
        cout << index << " ";
        //updating flag
        flag = false;
      }
    }
  }
  if(flag) cout<<"INVALID RANGE";
}

int main()
{
  kaprekarNumbers(82656, 99999);
  return false;
}