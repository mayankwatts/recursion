#include<iostream>
using namespace std;

int minCount(int n){
  
  if(n<=3)
  {
    return n;
  }
  
  int a=n;
  
  for(int i=1;i<n+1;i++)
  {
    int b=i*i;
    if(b>n)
    {
      break;
    }
    
    else
    {
      int c=1+minCount(n-b);
      if(a>c)
      {
        a=c;
      }
    }
  }

return a;
}

int main(){

  int num;
  cin >> num;
  cout << minCount(num);
  
  return 0;

}
