class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=words.size();
        map<char, vector<string>> m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i][0]].push_back(words[i]);
            
        }
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            char x=s[i];
            if(m.find(x)!=m.end()){
                vector<string> temp = m[x];
                m.erase(x);
                for(int j=0;j<temp.size();j++)
                {
                    if(temp[j].size()==1)
                    {
                        ans++;
                    }
                    else{
                        m[temp[j][1]].push_back(temp[j].substr(1));
                    }
                }
            }
            
        }
        return ans;
            
    }
};
