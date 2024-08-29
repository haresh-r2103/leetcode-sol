class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        ans = [-1,-1]
        mx = 0
        for i in range(len(mat)):
            if(mat[i].count(1) > mx):
                mx = mat[i].count(1)
                ans[0] = i
                ans[1] = mx
        if(sum(ans)<0):
            return [0,0]
        else:
            return ans