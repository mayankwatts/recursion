#include <iostream>
using namespace std;


int countZeros(int n) {
    if(n==0)
    {
      return 1;
    }
  if(n>0 && n<10)
  {
    return 0;
  }
  int output=countZeros(n/10);
  int c=n/10;
  if(n-(c*10)==0)
    return output+1;
  else
    return output;

}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
    return 0;
}
