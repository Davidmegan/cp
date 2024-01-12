#roman to integer
class Solution:
    def romanToInt(self, s: str) -> int:
        mylist=list(s)
        l=len(mylist)
        val=0
        romanvalues={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        for i in range(l):
            if(i<l-1 and (romanvalues[mylist[i]]<romanvalues[mylist[i+1]])):
                val-=romanvalues[mylist[i]]
            else:
                val+=romanvalues[mylist[i]]
        return val
