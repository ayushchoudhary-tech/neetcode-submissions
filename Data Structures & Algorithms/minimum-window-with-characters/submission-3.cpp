class Solution {
public: bool check(vector<int> window_freq , vector<int>t_freq)
          {  for(int i=0;i<256;i++)
          {
            if(window_freq[i]<t_freq[i])
            {
                return false;
            }
          }
           return true;


        }




    string minWindow(string s, string t) {
       int s_len=s.length();int t_len=t.length(); int res=INT_MAX;  string ans="";
       vector<int>window_freq(256,0); vector<int>t_freq(256,0);int low=0;int start=-1;
       for(int i=0; i<t_len;i++)
       {  t_freq[t[i]]++;
         
       } 
       for(int high=0;high<s_len;high++)
       { window_freq[s[high]]++;
         bool is_valid=check(window_freq,t_freq);
          while(is_valid)
          {  int len=high-low+1;
             if(res>len)
             {
                res=len;
                start=low;
            
             }
             window_freq[s[low]]--;
             low++;
             is_valid=check(window_freq,t_freq);


        }   
         

        }
          
        
       return  start==-1?"":s.substr(start,res);
    }
};
