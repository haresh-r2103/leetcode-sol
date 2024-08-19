class Solution:
    def longestCommonPrefix(self, arr: List[str]) -> str:
        m = arr[0]
        n = len(m)
        for i in range(1, len(arr)):
            while arr[i].find(m):
                m = m[:n-1]
                n-=1
            if not m:
                return ""
        return m