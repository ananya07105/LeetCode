class Solution {
public:
    int balancedStringSplit(string s) {
        int temp=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                temp+=1;
            else
                temp-=1;
            if(temp==0)
                ans+=1;
        }
        temp=0;
        return ans;
        
    }
};
