class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        m = 10000
        i = 0 
        j = k-1
        while(j < len(blocks)):
            t = blocks[i:j+1].count('W')
            m = min(m, t)
            i += 1
            j += 1
        return m
