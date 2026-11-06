class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){return false;}
        int s1_len=s1.length();int s2_len=s2.length(); 
        vector<int>s1arr(26,0); vector<int>s2arr(26,0);int low=0; int high=s1_len-1;
        for(int i=0;i<s1.length();i++)
        {
            s1arr[s1[i]-'a']++;
        }
        for(int i=low;i<=high;i++)
        {
            s2arr[s2[i]-'a']++;
        }
        if(s1arr==s2arr){return true;}
        while(high<s2_len)
        {  s2arr[s2[low]-'a']--;
           low++;high++;
           if(high==s2_len){break;}
           s2arr[s2[high]-'a']++;
           if(s1arr==s2arr){return true;}

        }
        return false;
    }
};
