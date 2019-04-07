#include <iostream>
using namespace std;

int sumOfDigits(int n) {
  if(n==0)
  {
    return 0;
  }
  
  int out=sumOfDigits(n/10);
  return out+(n-((n/10)*10));
  
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
   return 0;
}
