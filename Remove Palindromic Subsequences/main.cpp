class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)
            return 0;
        bool isPalin=true;
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-1-i])
                isPalin=false;
            
        }
        if(isPalin==true)
                return 1;
            else
                return 2;
    }
};
