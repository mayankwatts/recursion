#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
  if(num==0 || num==1)
  {
    return 1;
  }
  
  int a=num/10;
  int b=num%10;
  int c=keypad(a,output);
  
  if(b==2)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'b';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'c';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'a';
    }
    return 3*c;
    
  }
  
  if(b==3)
  {
   
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'e';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'f';
    }
     for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'d';
    }
    
    return 3*c;
    
  }
  
  if(b==4)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'h';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'i';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'g';
    }
    
    return 3*c;
    
  }
  
  if(b==5)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'k';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'l';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'j';
    }
    
    return 3*c;
    
  }
  
  if(b==6)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'n';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'o';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'m';
    }
    
    return 3*c;
  }
  
  if(b==7)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'q';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'r';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(3*c)]=output[i]+'s';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'p';
    }
    
    return 4*c;
    
  }
  
  if(b==8)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'u';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'v';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'t';
    }
    
    return 3*c;
    
  }
  
  if(b==9)
  {
    
    for(int i=0;i<c;i++)
    {
      output[i+c]=output[i]+'x';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(2*c)]=output[i]+'y';
    }
    for(int i=0;i<c;i++)
    {
      output[i+(3*c)]=output[i]+'z';
    }
    for(int i=0;i<c;i++)
    {
      output[i]=output[i]+'w';
    }
    
    return 4*c;
    
  }
    
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
