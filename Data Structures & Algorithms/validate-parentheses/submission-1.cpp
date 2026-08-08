class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        vector<char>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{' || s[i]=='[')
            { ans.push_back(s[i]);

            }else {
            if(ans.empty())
            {
                return false;
            }if( (s[i]==')' && ans.back()=='(')||(s[i]=='}'&& ans.back()=='{')|| (s[i]==']'&& ans.back()=='['))
            {
                ans.pop_back();
            }else{
                return false;
            }}
            
        }
       
        return ans.empty();
    }
};
