class Solution {
    public:
        char findTheDifference(string s, string t) {
            char str;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i = 0;i<t.length();i++){
                if(t[i]!=s[i]){
                    str = t[i];
                    break;
                }
            }
            return str;
        }
    };