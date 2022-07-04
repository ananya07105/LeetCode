class Solution {
public:
    int candy(vector<int>& ratings)
    {
        unordered_map<int,vector<int>> rate2ix;
        vector<int> dp(ratings.size(),0);     //arr to store final result of assignment of candy
        for(int i=0;i<ratings.size();i++)
        {
            rate2ix[ratings[i]].push_back(i);
        }
        auto ratingsCopy = ratings;
		
        sort(ratings.begin(),ratings.end());
        for(auto& val:ratings)
        {
            for(const auto& ix:rate2ix[val])
            {
                int lix = ix-1;
                int rix = ix+1;

                int lVal = lix>-1?dp[lix]:0;
                int rVal = rix<ratings.size()?dp[rix]:0;
				
				//if the left rating is equal to current rating, you don't need to assign more candy
				//for example,   rating = [2,1,1,1,2], the we just need to assign the least candy(1) to the child on index of middle 1
                if(lix>-1&&ratingsCopy[lix]==ratingsCopy[ix])    
                {
                    lVal = 0;
                }
                if(rix<ratings.size()&&ratingsCopy[rix]==ratingsCopy[ix])
                {
                    rVal = 0;
                }
                dp[ix] = max(lVal,rVal)+1;
            }
        }
        return accumulate(dp.begin(),dp.end(),0);
    }
};
