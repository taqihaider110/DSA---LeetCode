#include<iostream>
#include<stdbool.h>
using namespace std;
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
    cout<<"Enter no to check:"<<endl;
    cin>>x;
    isPalindrome(x);
    return 0;
}
