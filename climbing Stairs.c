// Climbing Stairs in C- Leet Code Solution
#include<stdio.h>
int climbStairs(int n){
int a=1,b=2;
    int res=0;
    if(n==1 || n==2)
            return n;
    for(int i=3;i<=n;i++)
    {
        res=a+b;
        a=b;
        b=res;
    }
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",climbStairs(n));
}