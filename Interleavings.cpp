#include <iostream>
#include<string.h>
using namespace std;

void func(char* first,char* second,char* output,int d){
  
  if(strlen(first)!=0)
  {
    output[d]=first[0];
    func(first+1,second,output,d+1);
  }
  
  if(strlen(second)!=0)
  {
    output[d]=second[0];
    func(first,second+1,output,d+1);
  }
  
  if(strlen(first)==0 && strlen(second)==0)
  {
    for(int i=0;i<d;i++)
    {
      cout<<output[i];
    }
    cout<<endl;
  }
  
  return;
}
   
void interleaving(char* first, char* second) {
  
  int a=strlen(first);
  int b=strlen(second);
  char output[a+b];
  int d=0;
  func(first,second,output,d);
  return;
}

int main() {
    char *a = new char[1000];
    char *b = new char[1000];
    cin >> a;
    cin >> b;
    interleaving(a, b);
    
    return 0;
}
