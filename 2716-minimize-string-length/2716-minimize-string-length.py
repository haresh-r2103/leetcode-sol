class Solution:
    def minimizedStringLength(self, s: str) -> int:
        st = set(s)
        return len(st)