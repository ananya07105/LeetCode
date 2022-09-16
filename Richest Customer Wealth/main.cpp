class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size(),sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
                ans=max(ans,sum);
            }
            sum=0;
        }
        return ans;
    }
};
