#include <iostream>
#include <string>
using namespace std;

void print(int num,string output)
{
  if(num==0)
  {
    cout<<output<<endl;
    return;
  }
  
   int a=num/10;
  int b=num%10;
  
  if(b==2)
  {
    print(a,'a'+output);
    print(a,'b'+output);
    print(a,'c'+output);
    
  }
  
  if(b==3)
  {
    print(a,'d'+output);
    print(a,'e'+output);
    print(a,'f'+output);
    
  }
  
  if(b==4)
  {
    print(a,'g'+output);
    print(a,'h'+output);
    print(a,'i'+output);
    
  }
  
  if(b==5)
  {
    print(a,'j'+output);
    print(a,'k'+output);
    print(a,'l'+output);
    
  }
  
  if(b==6)
  {
    print(a,'m'+output);
    print(a,'n'+output);
    print(a,'o'+output);
    
  }
  
  if(b==7)
  {
    print(a,'p'+output);
    print(a,'q'+output);
    print(a,'r'+output);
    print(a,'s'+output);
    
  }
  
  if(b==8)
  {
    print(a,'t'+output);
    print(a,'u'+output);
    print(a,'v'+output);
    
  }
  
  if(b==9)
  {
    print(a,'w'+output);
    print(a,'x'+output);
    print(a,'y'+output);
    print(a,'z'+output);
    
  }
  
return;
  
}

void printKeypad(int num){
    
  string output;
  
  print(num,output);
}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
