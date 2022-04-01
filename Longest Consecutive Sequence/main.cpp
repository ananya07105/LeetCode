class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int num: nums){
            hashSet.insert(num);
        }
        int count=0;
        for(int num: hashSet){
            if(hashSet.count(num-1))
                continue;
            int j=1;
            while(hashSet.count(num+j)) j++;
            count=max(count,j);
        }
        return count;
        
    }
};
