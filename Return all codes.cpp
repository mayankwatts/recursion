#include <bits/stdc++.h>
using namespace std;

static int k=0;

int get(string input,string output[10000],string s)
{
    if(input.size()<=0)
  {
      output[k]=s;
      k++;
     return 0;   
  } 

    int a;
  a=input[0]-'0';
  char b;
  b='a'+a-1;
  int size1;
  
    size1=get(input.substr(1),output,s+b);
  
  int c;
  c=((input[0]-'0')*10)+(input[1]-'0');
  char d;
  d='a'+c-1;
  int size2;
  
  if(c<=26 && c>=10)
   size2=get(input.substr(2),output,s+d);
  
  return 0;
}

int getCodes(string input, string output[10000]) {
 
  
  string s="";
  int x=get(input,output,s);
  return k+1;
 
}
