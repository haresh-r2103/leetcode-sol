class Solution:
    def mostPoints(self, questions: List[List[int]]) -> int:
        cache = [0] * len(questions)
        def backtracking(i):
            if i >= len(questions):
                return 0
            
            if cache[i]:
                return cache[i]
            
            points, brain = questions[i]
            cache[i] =  max(
                backtracking(i+1), # skipping
                points + backtracking(i+1+brain)
            )
            return cache[i]
        return backtracking(0)