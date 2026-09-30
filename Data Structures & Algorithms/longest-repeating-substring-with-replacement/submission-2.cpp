class Solution {
public: int maxfreq1( int freq[]){
       int maxfreq=0;
       for(int i=0;i<256;i++)
       {
        maxfreq=max(maxfreq,freq[i]);
       }
       return maxfreq;
    }

    int characterReplacement(string s, int k) {
        int freq[256]={0}; int ans=INT_MIN;
        int n=s.length(); int low=0;
        for(int high=0;high<n;high++)
        { freq[s[high]]++;
           int maxfreq=maxfreq1(freq);
           int len=high-low+1;
           int diff=len-maxfreq;
           while(diff>k)
           {
            freq[s[low]]--;
            low++;
            maxfreq=maxfreq1(freq);
            len=high-low+1;
            diff=len-maxfreq;
           }len=high-low+1;
           ans=max(ans,len);



        }
        return ans;
    }
};
