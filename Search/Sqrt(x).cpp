// Sqrt(x) in Cpp- Leet Code Solution
#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int result=sqrt(x);
        return result;
    }
};
int main(){
    int x;
    cin>>x;
    Solution s;
    cout<<s.mySqrt(x);
    return 0;
}