class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int changeCount = 0;
        for(int i=1;i<nums.size() && changeCount<=1;i++){
            if(nums[i-1]>nums[i]){
                changeCount++;
            if(i-2<0 || nums[i-2]<=nums[i])
                nums[i-1]=nums[i];
            else
                nums[i]=nums[i-1];
        }}
        return changeCount<=1;
    }
};
