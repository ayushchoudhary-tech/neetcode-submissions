class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_len=s1.length(), s2_len=s2.length();
        int k=s1_len;
        vector<int> arr1(26,0); int low=0 ,high=k-1; vector<int> arr2(26,0);
        if (s1_len > s2_len) return false;
        for(int i=0;i<s1_len;i++)
        {  arr1[s1[i]-'a']++;

        }
        for(int i=low;i<=high;i++)
        {  arr2[s2[i]-'a']++;
           
        }
        if(arr1==arr2){return true;}
        high++;
        while(high<s2_len)
        {  arr2[s2[high]-'a']++;
           if(high-low+1>s1_len)
           {  arr2[s2[low]-'a']--;
               low++;
            }
            if(high-low+1==s1_len)
            {
                if(arr1==arr2){return true;}
            }
            high++;

        }
        return false;
    }
};
