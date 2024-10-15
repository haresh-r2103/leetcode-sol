class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        tn = len(t)
        sn = len(s)

        if(sn == 0):
            return True
        if(tn == 0):
            return False
        i = 0
        j = 0
        while(j<len(t) and i<len(s)):
            if(t[j] == s[i]):
                i += 1
            j += 1
        if i == len(s):
            return True
        else:
            return False