class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        f = False
        for i in range(len(arr)-1):
            if((arr[i] / 2) in arr[i+1:] or (arr[i] * 2) in arr[i+1:]):
                f = True
                break
        return f