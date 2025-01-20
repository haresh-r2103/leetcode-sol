class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        R, C = len(mat), len(mat[0])
        mop = {}
        for r in range(R):
            for c in range(C):
                mop[mat[r][c]] = (r, c)
        rowC = [0] * R
        colC = [0] * C

        for i in range(len(arr)):
            r, c = mop[arr[i]]
            rowC[r] += 1
            colC[c] += 1
            if(colC[c] == R or rowC[r] == C):
                return i
        