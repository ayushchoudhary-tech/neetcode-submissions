class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n=s.length(); int ans=0;
        // for(int i=0;i<n;i++)
        // {  int hasset[255]={0};

        //     for(int j=i;j<n;j++)
        //     { if(hasset[s[j]]==1){break;}
        //       {
        //         int length=j-i+1;
        //         ans=max(ans,length);
        //         hasset[s[j]]=1;
        //       }

        //     }
        // }
        // return ans;
        int low=0; int high=0;
        int n=s.length(); int ans=0;
        unordered_map<char,int>mp;
        for(high=0;high<n;high++)
        { mp[s[high]]++;
          int k=high-low+1;
          while(mp.size()<k)
          { mp[s[low]]--;
            if(mp[s[low]]==0)
            {
                mp.erase(s[low]);
            }low++;
            k=high-low+1;

          }if(mp.size()==k)
          {
            int len=high-low+1;
            ans=max(ans,len);
          }

        }
        return ans;
    }
};
