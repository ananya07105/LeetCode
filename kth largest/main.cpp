class Solution {
public:
    inline int partition(vector<int>& nums,int low,int high,int k){
         int pivot=nums[high];
        int p=low;
        for(int i=low;i<high;i++){
            if(nums[i]<=pivot){
                swap(nums[i],nums[p]);
                p++;
            }
        }
        swap(nums[p],nums[high]);
        if(k==p)
            return nums[p];
        else if(k>p){
            return partition(nums,p+1,high,k);
        }
        else{
            return partition(nums,low,p-1,k);
        }
        
    }
    int findKthLargest(vector<int>& nums, int k) {
       k=nums.size()-k;
        return partition(nums,0,nums.size()-1,k);
    }
    
};
