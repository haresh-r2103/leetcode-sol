class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = [] #original list
        sub = [] #temp list

        def dfs(i):
            if(i>=len(nums)):
                res.append(sub.copy())
                return 
            #your taking that number
            sub.append(nums[i])
            dfs(i+1)

            #yourent taking that number
            sub.pop()
            dfs(i+1)
        dfs(0)
        return res
            