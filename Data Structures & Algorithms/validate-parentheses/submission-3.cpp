class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n%2!=0){return false;}
        stack<char>ans;
      for(int i=0;i<n;i++)
      { if(s[i]=='{' || s[i]=='[' ||s[i]=='(')
      {
        ans.push(s[i]);
      }else{
        if(ans.empty()){return false;}
         if((ans.top()=='(' && s[i]==')')||(ans.top()=='{' && s[i]=='}') ||(ans.top()=='[' && s[i]==']') )
         {
            ans.pop();
         }else {
            return false;
         }
      }



      }
       
        return ans.empty();
    }
};
