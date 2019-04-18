#include<iostream>
using namespace std;

#include<bits/stdc++.h>
long long find(int N,char prev,char prev_prev){
  
  if(N==1)
  {
    if(prev_prev=='S')
      return 2;
    return 1;
  }
  
  long long a,b,c,d,e,f,g,h;
  
  if(prev=='B' && prev_prev=='W')
  {
    a=find(N-1,'R','B');
    return a;
  }
  
  if(prev=='B' && prev_prev=='R')
  {
    b=find(N-1,'W','B');
    return b;
  }
  
  if(prev=='W')
  {
    c=find(N-1,'B','W');
    d=find(N-1,'R','W');
    return c+d;
  }
  
  if(prev=='R')
  {
    e=find(N-1,'B','R');
    f=find(N-1,'W','R');
    return e+f;
  }
  
   if(prev=='B' && prev_prev=='S')
  {
    g=find(N-1,'R','B');
    h=find(N-1,'W','B');
    return g+h;
  }
  
}
long long find_Ways(int N)
{
  char prev;
  prev='B';
  char prev_prev;
  prev_prev='S';
  
  long long a=find(N,prev,prev_prev);
  return a;
  
}

int main(){
int N;
cin>>N;
cout<<find_Ways(N);

return 0;
}
