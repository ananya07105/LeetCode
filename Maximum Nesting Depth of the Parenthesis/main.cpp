class Solution {
public:
    int maxDepth(string s) {
       int ans=0,k=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='(') k++;
           else if(s[i]==')') k--;
           ans=ans>k?ans:k;
       }
        return ans;
    }
};
