class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col =mat[0].size();
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j)
                    sum1 += mat[i][j];
                if(i+j==col-1)
                    sum2 += mat[i][j];
            }
        }
        
        if(row%2==0)
            return sum1+sum2;
        else
            return (sum1+sum2)-mat[row/2][row/2];
    }
};