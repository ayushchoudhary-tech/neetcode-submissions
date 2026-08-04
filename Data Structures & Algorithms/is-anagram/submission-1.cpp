class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(char ch:s){
            m[ch]++;
        }
        for(char ch:t){
           if(m[ch]==0)
           { return false;

           }
           m[ch]--;
        }
       return true;





    }

};
