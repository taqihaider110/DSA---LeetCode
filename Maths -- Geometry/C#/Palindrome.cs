public class Solution {
    public bool IsPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num = x;
        int check = 0;
        while(num!=0){
            int rem = num%10;
            check = check*10 + rem;
            num/=10;
        }
        if(check==x){
            return true;
        }
        else{
            return false;
        }
    }
}