class Solution {
public:  string generate(string &word){
          int arr[26]={0};
          int n=word.length();
         for(int i=0;i<n;i++){
            int idx=word[i]-'a';
            arr[idx]++;
         } string new_word="";
         for(int i=0;i<26;i++)
         {
            int freq=arr[i];
            if(freq>0){
                new_word+=string(freq,i+'a');
            }
         } return new_word;
      
     }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>result;
    //    unordered_map<string,vector<string>> m;
    //    int n=strs.size();
    //    for(int i=0;i<n;i++)
    //    {
    //     string temp=strs[i];
    //     sort(temp.begin(),temp.end());
    
    //     m[temp].push_back(strs[i]);
    //     } 
    //     for(auto it:m)
    //     {
    //         result.push_back(it.second);
    //     }


    //   return result;
       unordered_map<string,vector<string>> m;
       int n=strs.size();
       for(int i=0;i<n;i++)
       { string word=strs[i];
          string new_word=generate(word);
          m[new_word].push_back(word);

        }
        for(auto &it:m)
        { result.push_back(it.second);

        }

        return result;
    



    }
};
