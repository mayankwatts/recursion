#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
  
  if(n==0)
  {
    return 0;
  }
  
  int out=multiplyNumbers(m,n-1);
  
  return out+m;

}

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
    return 0;
}
