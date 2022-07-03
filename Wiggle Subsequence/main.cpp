class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size(), i=1, ans=1;
        while(i<len && nums[i]==nums[i-1])
            i++;
        if(i==len)
            return 1;
        bool up = nums[i-1]>nums[i];
        for(;i<len;i++)
            if((up && nums[i]<nums[i-1]) || (!up && nums[i]>nums[i-1]))
                up=!up,ans++;
        return ans;
        
    }
};
