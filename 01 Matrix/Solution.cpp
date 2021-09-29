class Solution {
public:
    bool valid(int a,int b,int n,int m){
        return (a>=0&&a<n&&b>=0&&b<m);
    }
    int d[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            pair<int,int> front=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int a=front.first+d[i][0];
                int b=front.second+d[i][1];
                if(valid(a,b,n,m)&&ans[a][b]>ans[front.first][front.second]+1){
                    ans[a][b]=ans[front.first][front.second]+1;
                    q.push({a,b});
                }
            }
        }
        return ans;
    }
};
