class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> um;
        unordered_map<char,int>::iterator uit;
        map<int,int> mp;
        map<int,int>::reverse_iterator it;
        
        for(auto c:s)
            um[c]++;
        for(uit=um.begin();uit!=um.end();uit++)
            mp[uit->second]++;
        int count=0;
        for(it=mp.rbegin();it!=mp.rend();it++)
        {
            while(it->second>1){
                int num=it->first;
                while(mp.find(num)!=mp.end())
                    num--;
                count+=(it->first-num);
                it->second=it->second-1;
                if(num!=0)
                    mp[num]=1;
                
            }
        }
        return count;
    }
};
