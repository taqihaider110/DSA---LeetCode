class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return 2;
        }
        return 1;
    }
};