class Solution:
    def bestTeamScore(self, scores: List[int], ages: List[int]) -> int:
        arr = []
        n = len(scores)
        for i in range(n):
            arr.append([ages[i],scores[i]])
        arr.sort()
        mxl = 0
        dp = [0 for i in range(n)]
        for i in range(n):
            mx = 0
            for j in range(i):
                if arr[j][1]<=arr[i][1]:
                    mx = max(mx,dp[j])               
            dp[i] = mx+arr[i][1]
            mxl = max(mxl,dp[i])
        return mxl
