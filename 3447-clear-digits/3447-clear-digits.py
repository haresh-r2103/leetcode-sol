class Solution:
    def clearDigits(self, s: str) -> str:
        l = []
        for i in s:
            if i.isdigit():
                if l:  # Check if the list is not empty before popping
                    l.pop()
            else:
                l.append(i)  # Use append instead of push
        
        return "".join(l)  # No need to reverse if we process correctly
