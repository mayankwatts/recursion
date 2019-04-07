#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  if(size==0)
  {
    return -1;
  }
  
  int out=lastIndex(input+1,size-1,x);
  
  if(input[0]==x || out!=-1)
  {
    return out+1;
  }
  
  if(out==-1)
  {
    return out;
  }

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;
    
    return 0;

}


