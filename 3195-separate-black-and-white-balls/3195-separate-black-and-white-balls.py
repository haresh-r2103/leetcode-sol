class Solution:
    def minimumSteps(self, s: str) -> int:
        c = 0
        l = 0 
        for r in range(len(s)):
            if(s[r] == "0"):
                c += (r - l)
                l += 1
        return c