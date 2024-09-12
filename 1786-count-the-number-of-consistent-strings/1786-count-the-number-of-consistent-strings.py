class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        c = 0
        for i in words:
            ts = set(i)
            if(all(letter in allowed for letter in ts)):
                c+=1
        return c