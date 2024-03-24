class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            // for(int j=i;j<nums.size()-1;j++){
            //     if(nums[i]==nums[j+1]){
            //         count++;
            //     }
                if(count>0){
                    return nums[i];
                }
            // }
        }
        return 0;
    }
};