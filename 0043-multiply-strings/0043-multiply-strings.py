class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        t1 = 0
        t2 = 0
        for i in num1:
            if(i=='1'):
                t1 = (t1*10)+1
            elif(i=='2'):
                t1 = (t1*10)+2
            elif(i=='3'):
                t1 = (t1*10)+3
            elif(i=='4'):
                t1 = (t1*10)+4
            elif(i=='5'):
                t1 = (t1*10)+5
            elif(i=='6'):
                t1 = (t1*10)+6
            elif(i=='7'):
                t1 = (t1*10)+7
            elif(i=='8'):
                t1 = (t1*10)+8
            elif(i=='9'):
                t1 = (t1*10)+9
            elif(i=='0'):
                t1 = (t1*10)+0
        for j in num2:
            if(j=='1'):
                t2 = (t2*10)+1
            elif(j=='2'):
                t2 = (t2*10)+2
            elif(j=='3'):
                t2 = (t2*10)+3
            elif(j=='4'):
                t2 = (t2*10)+4
            elif(j=='5'):
                t2 = (t2*10)+5
            elif(j=='6'):
                t2 = (t2*10)+6
            elif(j=='7'):
                t2 = (t2*10)+7
            elif(j=='8'):
                t2 = (t2*10)+8
            elif(j=='9'):
                t2 = (t2*10)+9
            elif(j=='0'):
                t2 = (t2*10)+0
        ans = t1*t2
        return str(ans)
        