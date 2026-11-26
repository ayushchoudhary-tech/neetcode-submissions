class Solution {
public:

    string encode(vector<string>& strs) {
       string res = ""; 
        for (const string& str : strs) { 
            res += to_string(str.length()) + '#' + str; 
        } 
        return res; 

    }

    vector<string> decode(string s) {
          int n = s.length(); 
          int i=0; vector<string>decoded;
        
        while (i < n) {
            // Find the position of the delimiter '#'
            int j = i;
            while (j < n && s[j] != '#') {
                j++;
            }
            
            // Extract the length of the upcoming string
            int len = stoi(s.substr(i, j - i));
            
            // Move pointer past the '#' character
            i = j + 1;
            
            // Extract the actual string using the decoded length
            decoded.push_back(s.substr(i, len));
            
            // Move pointer to the start of the next encoded block
            i += len;
        } 
        return decoded; 
        
    }
};
