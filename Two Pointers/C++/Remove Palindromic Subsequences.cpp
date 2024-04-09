// class Solution {
// public:
//     int removePalindromeSub(string s) {
//         // Check if the string is empty, if so, no removals are needed
//         if(s.size()==0) return 0;
        
//         // Initialize two pointers, i at the beginning of the string and j at the end
//         int i=0;
//         int j=s.size()-1;
        
//         // Iterate through the string from both ends towards the middle
//         while(i<j){
//             // If the characters at positions i and j are equal, move both pointers towards the center
//             if(s[i]==s[j]){
//                 i++;
//                 j--;
//             }
//             // If the characters at positions i and j are not equal, it means the string is not a palindrome
//             // Therefore, at least 2 removals are needed to make it a palindrome
//             else return 2;
//         }
//         // If the loop completes without returning, it means the string is a palindrome, and only 1 removal is needed
//         return 1;
//     }
// };
class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.size() == 0)
            return 0;
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return 2;
            ++i;
            --j;
        }
        return 1;
    }
};