#include<iostream>
#include<stdbool.h>
#include<cstring>
using namespace std;
//For String
bool Palindrome(string str){
    string rev;
    int len=str.length();
    for(int i=len-1;i>=0;i--){
        rev += str[i];
    }
    if (rev == str) {
        cout << "The string is a palindrome" << endl;
        return true;
    } else {
        cout << "Not a palindrome" << endl;
        return false;
    }
}

//For Int
bool isPalindrome(int x){
    int rev=0;
    int temp=x;
    if(x<0)
        return false;
    while(x){
        rev=rev*10+x%10;
        x/=10;
    }
    if(temp==rev){
    cout<<"The no is palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}
int main(){
    int x;
    string x1;
    cout<<"Enter no to check:"<<endl;
    cin>>x;
    isPalindrome(x);
    cout<<"Enter string to check:"<<endl;
    cin>>x1;
    Palindrome(x1);
    return 0;
}
