class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int startrow = 0;
        int endrow = matrix.size() - 1;

        int startcol = 0;
        int endcol = matrix[0].size() - 1;

        vector<int> ans;

        while(startrow <= endrow && startcol <= endcol) {

            // Left -> Right
            for(int j = startcol; j <= endcol; j++) {
                ans.push_back(matrix[startrow][j]);
            }
            

            // Top -> Bottom
            for(int i = startrow+1; i <= endrow; i++) {
                ans.push_back(matrix[i][endcol]);
            }
           
            // Right -> Left
            for(int j = endcol-1; j >= startcol; j--) {
                if(startrow == endrow) break;

                ans.push_back(matrix[endrow][j]);
            }
          

            // Bottom -> Top
            for(int j = endrow-1; j >= startrow+1; j--) {
                if(startcol == endcol) break;

                ans.push_back(matrix[j][startcol]);
            }
            startrow++;endrow--;startcol++;endcol--;
          
        }

        return ans;
    }
};