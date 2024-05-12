class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int s1 = s.length();
        int s2 = t.length();
        
        if(s1 == 0 || s2 == 0){
            return 0;
        }
        
        int sum = 0;
        
        for(int i=0;i < min(s1, s2);i++){
            for(int j=0;i < s2;j++){
                if(s[i ]== t[j]){
                    sum+= abs(i - j);
                    break;
                }
            }
        }
        return sum;
     }
};