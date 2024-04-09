// Contains Duplicate in C++- Leet Code Solution
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//TimeComplexityIssue
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         bool flag=false;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//             if(nums[i]==nums[j])
//                 return true;
//             }
//         }
//         return flag;
//     }
// };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};
int main(){
    Solution s1;
    int size;
    cout<<"Enter size of an array:";
    cin>>size;
    vector<int> arr1(size);
    for(int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<" : "<<endl;
        cin>>arr1[i];
    }
    s1.containsDuplicate(arr1);
    bool hasDuplicate = s1.containsDuplicate(arr1);
    if (hasDuplicate) {
        cout << "The array contains duplicate elements." << endl;
    } else {
        cout << "The array does not contain duplicate elements." << endl;
    }
    return 0;
}
