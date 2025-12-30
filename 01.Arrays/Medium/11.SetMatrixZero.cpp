// 73. Set Matrix Zeroes
// time complexity: O(n*m)
// space complexity: O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size() , m=matrix[0].size() , i , j;
        bool firstRow = false,firstCol=false;
        for(j=0;j<m;j++){
            if(matrix[0][j]==0){
                firstRow=true;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(matrix[i][0]==0){
                firstCol=true;
                break;
            }
        }
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if (firstRow) {
            for (j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        if (firstCol) {
            for (i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        
    }
};