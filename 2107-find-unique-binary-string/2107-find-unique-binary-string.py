class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        def generate_binary(n, prefix=""):
            if n == 0:
                return [prefix]  # Return the generated binary number as a list element
            else:
                return generate_binary(n - 1, prefix + "0") + generate_binary(n - 1, prefix + "1")
        n = len(nums)
        t = generate_binary(n)
        for i in t:
            if i not in nums:
                return i
                break
        

    

        
        
    