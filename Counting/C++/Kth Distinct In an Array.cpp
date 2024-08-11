class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> num = {};
        for (int i = 0; i < arr.size(); i++) {
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    num.push_back(arr[i]);
                    break;
                }
            }
        }
        for (int i = 0; i < num.size(); i++) {
            for (auto it = arr.begin(); it != arr.end();) {
                if (*it == num[i]) {
                    it = arr.erase(it);
                } else {
                    ++it;
                }
            }
        }
        if (k - 1 < arr.size()) {
            return arr[k - 1];
        }

        return "";
    }
};