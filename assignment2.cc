#include<iostream>
using namespace std;
int main(){
  int input;
  bool isPrime = true;
  cout << " input a positive number " << endl;
  cin >> input;
  if(input == 0)
  {
    cout << " This is not a prime Number " << endl;
  }
  else
  {
    for(int i = 2; i <= input /2; i++)
    {
      if(input % i ==0)
      {
        isPrime = false;
        break;
      }
    }
    if(isPrime)
    {
      cout << " This is a prime Number " << endl;
    }
    else
    {
      cout << " This is not a prime Number " << endl;
    }
  }
  return 0;
}
