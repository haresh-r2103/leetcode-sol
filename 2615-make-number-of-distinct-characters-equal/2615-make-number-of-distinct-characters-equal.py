class Solution:
    def isItPossible(self, word1: str, word2: str) -> bool:
        d1 = Counter(word1)
        d2 = Counter(word2)
        
        # Avoid changing length of dictionary in the iterations.
        for c in "abcdefghijklmnopqrstuvwxyz":
            d1[c] = d1.get(c, 0)
            d2[c] = d2.get(c, 0)
        
        for c1 in d1:
            if d1[c1] > 0:
                # Swap c1 first
                d1[c1] -= 1

                for c2 in d2:
                    if d2[c2] > 0:
                        # Finish the whole swaping:
                        # Same as word1[c1_idx], word2[c2_idx] = word2[c2_idx], word1[c1_idx] 
                        d2[c1] += 1
                        d2[c2] -= 1
                        d1[c2] += 1
                        
                        # Check if the counts of distinct characters are same.
                        if len([1 for c in d1.values() if c > 0]) == len([1 for c in d2.values() if c > 0]):
                            return True
                        
                        # Restore current swap for the next swap
                        d2[c1] -= 1
                        d2[c2] += 1
                        d1[c2] -= 1

                # Restore c1 for the next character of word1
                d1[c1] += 1
        
        # No swaps above reach the goal
        return False