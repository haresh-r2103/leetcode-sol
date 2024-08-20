class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        
        nl = digits
        num = 0
        for i in nl:
            num = num*10 + i

        num += 1
        s = str(num)
        
        ans = []
        for i in s:
            ans.append(int(i))
        
        return ans