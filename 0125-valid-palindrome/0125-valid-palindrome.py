class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = list(s)
        ans = ""
        for i in l:
            if(i.isalpha() or i.isnumeric()):
                ans += i.lower()
        
        if(ans == ans[::-1]):
            return True
        
        else:
            return False