class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> fm;
        for (int i:nums) {
            fm[i]++;
        }
        for(auto it:fm){
            if(it.second>2){
                return false;
            }
        }
        return true;
    }
};