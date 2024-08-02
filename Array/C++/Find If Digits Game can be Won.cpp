class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < n; i++) {
            if(nums[i]<10){
                s1 += nums[i];
            }
            else{
                s2 += nums[i];
            }
        }
        if (s1 == s2) {
            return false;
        } else {
            return true;
        }
    }
};