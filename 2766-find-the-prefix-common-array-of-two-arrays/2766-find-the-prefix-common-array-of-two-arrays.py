class Solution(object):
    def findThePrefixCommonArray(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        ts = 0
        C = []
        # index 0
        if(A[0] == B[0]):
          C.append(1)
          ts += 1
        else:
            C.append(0)
        for i in range(1,len(A)):
            if(A[i] == B[i]):
                ts += 1
            else:
                if(A[i] in B[0:i+1]):
                    ts += 1
                if(B[i] in A[0:i+1]):
                    ts += 1
            C.append(ts)
        return C
