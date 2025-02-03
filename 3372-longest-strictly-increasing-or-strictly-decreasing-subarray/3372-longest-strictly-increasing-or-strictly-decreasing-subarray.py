class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        
        n = len(nums)
        if n == 1:
            return 1
        
        #increasing
        ans = -1
        i = 0
        j = 1
        t = 1
        while(j<n):
            if(nums[i] < nums[j]):
                t += 1
                ans = max(ans, t)
                i += 1
                j += 1
            else:
                t = 1
                i += 1
                j += 1
        #decrease
        kans = -1
        a = 0
        b = 1
        k = 1
        while(b<n):
            if(nums[a] > nums[b]):
                k += 1
                kans = max(kans, k)
                a += 1
                b += 1
            else:
                k = 1
                a += 1
                b += 1
        if(max(kans, ans)<0): 
            return 1
        else:
            return max(kans, ans)