class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        num = 0
        check = x
        while(check!=0):
            digit = check % 10
            num = digit + num*10
            check//=10

        if(x==num):
            return True
        else:
            return False
         