#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        string str = to_string(n);
        int product = 1;
        int sum = 0 ;
        for (int i = 0; i < str.length(); i++) { 
            product *=  str[i]-'0'; //'0' is the ASKII value = 48
            sum += str[i] -'0'; 
        }
    cout<< product-sum;
    }
    int SubtractProductAndSum(int n) {
        int product = 1;
        int sum = 0 ;
        int digit=0;
        while(n>0){
            digit=n%10;
            n=n/10;
            product*=digit;
            sum+=digit;
        }
        cout<< product-sum; 
    }
};
int main(){
    Solution s1;
    s1.subtractProductAndSum(234);
    cout<<endl;
    s1.SubtractProductAndSum(4421);
}
// Example :01
// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

// Example :02
// Input: n = 4421
// Output: 21
// Explanation: 
// Product of digits = 4 * 4 * 2 * 1 = 32 
// Sum of digits = 4 + 4 + 2 + 1 = 11 
// Result = 32 - 11 = 21