class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count=0
        s=s.strip()
        start=len(s)-1
        for i in range(start,-1,-1):
            if(s[i]==' '):
                break
            count+=1
        return count
