#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
  if(input[0]=='\0')
  {
    return;
  }
  
  replacePi(input+1);
 
  if(input[0]=='p' && input[1]=='i')
  {
    int i=0;
    while(input[i]!='\0')
      i++;
    while(i>1)
    {
      input[i+2]=input[i];
      i--;
    }
      input[0]='3';
    input[1]='.';
    input[2]='1';
    input[3]='4';
    
  }

  return;
}

int main() {
    char input[100];
    cin.getline(input, 100);
    replacePi(input);
    cout << input << endl;
    
    return 0;
}
