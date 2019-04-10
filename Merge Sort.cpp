#include <iostream>
using namespace std;

void merge(int left[],int lsize,int right[],int rsize,int input[],int size)
{
  int i,j,k=0;
  while(i<lsize && j<rsize)
  {
    if(left[i]<=right[j])
    {
      input[k]=left[i];
      i++;
      k++;
    }
       
    if(left[i]>right[j])
       {
         input[k]=right[j];
         j++;
         k++;
       }
  }
       
    while(i<lsize)
       {
         input[k]=left[i];
         i++;
         k++;
       }
       
    while(j<rsize)
       {
         input[k]=right[j];
         j++;
         k++;
       }
  
}

void mergeSort(int input[], int size){
	
  if(size<2)
  {
    return;
  }
  
  int mid=size/2;
  
  int left[(size/2)+1];
  int right[(size/2)+1];
  
  for(int i=0;i<mid;i++)
  {
    left[i]=input[i];
  }
      
   for(int i=mid;i<size;i++)
  {
    right[i-mid]=input[i];
  }
  
  mergeSort(left,mid);
  mergeSort(right,size-mid);
  
  merge(left,mid,right,size-mid,input,size);
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
  
  return 0;
}
