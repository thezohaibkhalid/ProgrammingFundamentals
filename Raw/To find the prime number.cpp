#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int num = 2; 
  
  while (num <= 1000) {
    bool prime = true; 
    
    
    for (int i = 2; i <= sqrt(num); i++) {
      if (num % i == 0) {
        prime = false;
        break; 
      }
    }
    
    if (prime) {
      cout<<num<<" is a prime number " <<endl;
    }
    
    num++;
  }
  
  return 0;
}

