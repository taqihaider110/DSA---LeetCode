class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1,0);
        for(auto i : nums){
            v[i]++;
        }
        vector<int> ans;
        for(int i = 1;i< v.size();i++){
            if(v[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};