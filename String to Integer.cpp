#include <iostream>
using namespace std;

int count=1;
int stringToNumber(char input[]) {
  
  if(input[0]=='\0')
  {
    return 0;
  }
  
  int out=stringToNumber(input+1);
    
    int a=count*(((int)input[0])-48);
    count*=10;
    
    return a+out;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
    
    return 0;
}
