class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        tot = sum(chalk)
        r = k%tot
        for i, value in enumerate(chalk):
            r -= value
            if(r < 0):
                return i
        return -1