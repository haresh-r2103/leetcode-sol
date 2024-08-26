class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        t=0
        i = 0
        while(t<k):
            # if(nums[i] == min(nums)):
            #     nums[i] *= multiplier
            # else:
            #     i = nums.index(min(nums))
            #     nums[i] *= multiplier
            tmp = min(nums)
            ind = nums.index(tmp)
            nums[ind] *= multiplier
            t += 1
        return nums