#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    
  if(k==0)
  {
    return 1;
  }
  
  double sum=geometricSum(k-1);
  double j=1;
  for(int i=0;i<k;i++)
  {
    j=j*0.5;
  }
  
  return sum+j;

}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
