class Solution:
    def maxScore(self, s: str) -> int:
        ans = -1
        for i in range(1, len(s)):
            ts = s[0:i].count('0') + s[i:].count('1')
            ans = max(ts, ans)
        return ans