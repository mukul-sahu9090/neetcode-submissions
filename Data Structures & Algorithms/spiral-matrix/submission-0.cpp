class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int strow=0;
        int endrow=matrix.size()-1;
        int stcol=0;
        int endcol=matrix[0].size()-1;
        vector<int> arr;
        while(strow<=endrow && stcol<=endcol){
            //top
            for(int i=stcol;i<=endcol;i++){
                arr.push_back(matrix[strow][i]);
            }
            //right
            for(int i=strow+1;i<=endrow;i++){
                arr.push_back(matrix[i][endcol]);
            }
            //bottom
            for(int i=endcol-1;i>=stcol;i--){
                if(strow==endrow){
                    break;
                }
                arr.push_back(matrix[endrow][i]);
            }
            //left
            for(int i=endrow-1;i>strow;i--){
                if(stcol==endcol){
                    break;
                }
                arr.push_back(matrix[i][strow]);
            }
            strow++;
            endrow--;
            stcol++;
            endcol--;
        }
        return arr;
    }
};
