from typing import List

class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        total_sum = sum(nums)
        left_sum = 0
        count = 0

        # Loop through the array except the last element
        for i in range(len(nums) - 1):
            left_sum += nums[i]
            right_sum = total_sum - left_sum

            # Check if left_sum >= right_sum
            if left_sum >= right_sum:
                count += 1

        return count
