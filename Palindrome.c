// Palindrome in C- Leet Code Solution
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
long int rev = 0;
int temp = x;
if(x<0)
	return false;

while(x){
    rev = rev * 10 + x % 10;
    x /= 10;
	}
        
return (temp == rev);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",isPalindrome(n));
}
