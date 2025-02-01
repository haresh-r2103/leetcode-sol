class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        l = len(nums)
        if(l == 1):
            return True
        if(l == 2):
            if(sum(nums)%2==0):
                return False
            else:
                return True
        i = 1
        while(i!=l):
            if((nums[i-1] + nums[i])%2 == 0):
                return False
            i += 1
        return True
