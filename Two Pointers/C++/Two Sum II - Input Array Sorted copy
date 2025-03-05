class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index1 = 0;
        int index2 = nums.size()-1;
        while(index1<index2){
            if((nums[index1]+nums[index2]) == target ){
                return {index1+1,index2+1};
            }
            else if((nums[index1]+nums[index2]) > target ){
                index2--;
            }
            else{
                index1++;
            }
        }
        return {0,0};
    }
};