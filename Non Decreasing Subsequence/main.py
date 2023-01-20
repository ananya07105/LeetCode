class Solution:
    def findSubsequences(self, nums: List[int]) -> List[List[int]]:
        ans = [[]]
        for n in nums:
            newarr = []
            for a in ans:
                if len(a)>0 and a[-1]>n:
                    continue
                copy = a[:]
                copy.append(n)
                newarr.append(copy)
            newarr+=ans
            ans=newarr
        seen=set()
        res = []
        for x in ans:
            if tuple(x) not in seen:
                seen.add(tuple(x))
                if len(x)>=2:
                    res.append(x)
        return res
