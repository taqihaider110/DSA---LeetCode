// class Solution {
// public:
//     bool canArrange(vector<int>& arr, int k) {
//         int i = 0;
//         int j = arr.size()-1;
//         if((arr.size()%2)!=0){
//             return false;
//         }
//         bool check = false;
//         // sort(arr.begin(),arr.end());
//         while(i<j){
//             if((arr[i]+arr[j])%k==0){
//                 check = true;
//             }
//             else{
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         if(check == true){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // Array to store the frequency of each remainder
        vector<int> remainderCount(k, 0);
        
        // Fill the remainder count array
        for(int num : arr) {
            // Handle negative numbers by adjusting remainder
            int remainder = ((num % k) + k) % k;
            remainderCount[remainder]++;
        }
        
        // Check if pairs are possible
        // For remainder 0, count must be even
        if(remainderCount[0] % 2 != 0) {
            return false;
        }
        
        // For other remainders, remainder[i] must match remainder[k-i]
        for(int i = 1; i < k; i++) {
            if(remainderCount[i] != remainderCount[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};
