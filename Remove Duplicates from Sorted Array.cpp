// Remove Duplicates from Sorted Array in C++- Leet Code Solution
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[counter]){
                counter++;
                nums[counter]=nums[i];
            }
        }
    return counter+1;    
}
};