class Solution {
public:
    void helper(vector<int> a, vector<vector<int>> &ans,int idx){
        if(idx==a.size())
        {
            ans.push_back(a);
            return;
        }
        for(int i=idx;i<a.size();i++)
        {
            if(i!=idx && a[i]==a[idx])
                continue;
            swap(a[i],a[idx]);
            helper(a,ans,idx+1);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(nums,ans,0);
        return ans;
    }
};
