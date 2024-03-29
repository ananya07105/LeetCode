class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> A;
        for(int i=0;i<heights.size();i++)
        {
            A.push_back({heights[i],names[i]});
        }
        sort(A.rbegin(),A.rend());
        vector<string> ans;
        for(int i=0;i<names.size();i++)
            ans.push_back(A[i].second);
        return ans;
    }
};
