from typing import List

class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n = len(nums)
        flips = 0
        
        i = 0
        while i < n - 2:
            if nums[i] == 0:
                # Flip the segment nums[i], nums[i+1], nums[i+2]
                nums[i] = 1 - nums[i]
                nums[i + 1] = 1 - nums[i + 1]
                nums[i + 2] = 1 - nums[i + 2]
                flips += 1
            i += 1
        
        # After processing, check if all elements are 1
        if all(num == 1 for num in nums):
            return flips
        else:
            return -1

