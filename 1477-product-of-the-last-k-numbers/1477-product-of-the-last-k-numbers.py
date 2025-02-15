class ProductOfNumbers:

    def __init__(self):
        self.lst = []
        self.p = 1

    def add(self, num: int) -> None:
        if num:
            self.p *= num
            self.lst.append(self.p)
        else:
            self.lst = []
            self.p = 1 

    def getProduct(self, k: int) -> int:
        if len(self.lst) < k:
            return 0
        elif k == len(self.lst):
            return self.p
        else:
            return int(self.lst[-1] / self.lst[-1 - k])


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)