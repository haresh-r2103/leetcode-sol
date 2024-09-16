class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        mins = [int(t[:2]) * 60 + int(t[3:]) for t in timePoints]
        mins.sort()
        ans = min(mins[i+1] - mins[i] for i in range(len(mins)-1))
        return min(ans, 24*60 - mins[-1] + mins[0])
        
        