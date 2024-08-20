class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = s.split()
        ans = len(l[-1])
        return ans
      
        