class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        ans = []
        n = min(n, max(target))
        l = list(range(1, n + 1))
        for i in l:
            if i in target:
                ans.append("Push")
            else:
                ans.append("Push")
                ans.append("Pop")
        return ans