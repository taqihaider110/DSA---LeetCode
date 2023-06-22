// Merge Sorted Arrays in C++- Leet Code Solution
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j=0,i=m;j<n;j++){
            nums1[i]=nums2[j];
            i++;
        }
    sort(nums1.begin(),nums1.end());
    }
};
int main(){
    Solution s1;
    vector<int> arr1{1,2,4,5};
    int m = arr1.size();
    vector<int>arr2{5,7,9,12};
    int n = arr2.size();
    arr1.resize(m+n);
    s1.merge(arr1,m,arr2,n);
    for(int i=0;i<m+n;i++){
        cout<<arr1[i]<<" ";
    }
}