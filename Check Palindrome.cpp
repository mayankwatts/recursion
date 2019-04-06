#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char input[],int low,int high)
{
    if(low==high)
        return true;
    if(input[low]!=input[high])    
        return false;
    if(low+1<high)
       return isPalindrome(input,low+1,high-1);
    return true;
}
bool checkPalindrome(char input[]) {
    int len=strlen(input);
    return isPalindrome(input,0,len-1);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}
