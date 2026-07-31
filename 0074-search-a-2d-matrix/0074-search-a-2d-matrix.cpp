class Solution {
public:
    bool searchinRow(vector<vector<int>>& mat , int target,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
         int  mid=(st+end)/2;
         if(target>mat[row][mid]){
            st=mid+1;
         }
         else if(target<mat[row][mid]){
            end=mid-1;
         }
         else{ 
            return true;
         }
      }
      return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m=mat.size(),n=mat[0].size();
        int startrow=0,endrow=m-1;
        while(startrow<=endrow){
         int midrow=(startrow+endrow)/2;
         if(target>=mat[midrow][0]&&target<=mat[midrow][n-1]){
            return searchinRow(mat,target,midrow);
         }
         else if(target<mat[midrow][0]){
            endrow=midrow-1;
         }
         else{
            startrow=midrow+1;
         }

        }
        return false;
    }
};