class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        for i in nums:
            if(nums.count(i) >  2):
                while(nums.count(i) > 2):
                    nums.remove(i)
        return len(nums)
