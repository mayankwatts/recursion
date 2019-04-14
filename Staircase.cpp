#include <iostream>
using namespace std;

int stair(int n,int dp[],int size){
  if(n==1)
    {
      return 1;
    }
   if(n==2)
    {
      return 2;
    }
   if(n==3)
    {
      return 4;
    }
  if(dp[n]!=-1)
  {
    return dp[n];
  }
  
  int out1=stair(n-1,dp,size);
  int out2=stair(n-2,dp,size);
  int out3=stair(n-3,dp,size);
  
 return dp[n]=out1+out2+out3;
}
int staircase(int n){
    
int a[n+1];
  for(int i=0;i<n+1;i++)
  {
    a[i]=-1;
  }
  
  return stair(n,a,n+1);
     
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
    
    return 0;
}
