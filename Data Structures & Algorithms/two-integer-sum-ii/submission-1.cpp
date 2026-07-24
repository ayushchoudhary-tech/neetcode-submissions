class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int st=0,end=numbers.size()-1;
     vector<int> res;
     while(st<end)
     {
        if(numbers[st]+numbers[end]==target)
        { res.push_back(st+1);
          res.push_back(end+1);
          return res;

        }
        else if(numbers[st]+numbers[end]>target)
        {
            end--;
        }
        else{st++;

        }
        
     }
     return res;
    }
};
