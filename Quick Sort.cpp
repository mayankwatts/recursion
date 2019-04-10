#include<iostream>
using namespace std;


int partition(int a[],int s,int e)
{
  int count=0;
  for(int i=s+1;i<=e;i++)
  {
    if(a[i]<a[s])
      count++;
  }
  
  int temp=0;
  temp=a[s];
  a[s]=a[s+count];
  a[s+count]=temp;
  
  int i=s;
  int j=e;
  while(i<s+count && j>s+count)
  {
    if(a[i]<a[s+count])
      i++;
    else if(a[j]>=a[s+count])
      j--;
    else
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  
  return s+count;
}

void quickSort(int input[], int size) {
  
  if(size<2)
  {
    return;
  }
  
  int c=partition(input,0,size-1);
  
  quickSort(input,c);
  quickSort(input+(c+1),size-c-1);
  
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;
    
    return 0;
}


