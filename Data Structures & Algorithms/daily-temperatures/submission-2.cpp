class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int> s;
        vector<int>res(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && temp[s.top()]<=temp[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                res[i]=0;            
            }
            else{
                res[i]=s.top()-i;
            }
            s.push(i);
        }

          return res;

    }
};
