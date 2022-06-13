class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> m;
        for(auto i=0;i<nums1.size();++i)
        {
            m[nums1[i]]+=1;
        }
        for(auto i=0;i<nums2.size();++i)
        {
            if(m[nums2[i]]>=1){
                m[nums2[i]]-=1;
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};
