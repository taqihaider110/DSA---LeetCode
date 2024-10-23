#include<iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n<0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        return fib(n-1)+ fib(n-2);
    }
};

int main(){
    int n ; 
    Solution s;
    while(1){
        cout<<"Enter any Number:";
        cin>>n;
        cout<<s.fib(n);
        cout<<endl;
    }

}