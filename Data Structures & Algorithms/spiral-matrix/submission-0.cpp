class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int n=matrix.size(),m=matrix[0].size();
       vector<int>spiral;
       int srow=0,erow=n-1;int scol=0,ecol=m-1;
       while(srow<=erow && scol<=ecol)
       {
         for(int j=scol;j<=ecol;j++){
            spiral.push_back(matrix[srow][j]);
            }
         for(int i=srow+1;i<=erow;i++){
            spiral.push_back(matrix[i][ecol]);
         }
         for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){break;}
            spiral.push_back(matrix[erow][j]);
         }
         for(int i=erow-1;i>srow;i--){
            if(scol==ecol){break;}
            spiral.push_back(matrix[i][scol]);
         }
         srow++;scol++;erow--;ecol--;

       }return spiral;

    }
};
