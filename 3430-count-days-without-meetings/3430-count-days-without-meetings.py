class Solution:
    def countDays(self, days: int, meetings: List[List[int]]) -> int:
        meetings.sort()
        pe = 0
        for start, end in meetings:
            start = max(start, pe+1)
            l = end - start + 1
            days -= max(l, 0)
            pe = max(pe, end)
        return days