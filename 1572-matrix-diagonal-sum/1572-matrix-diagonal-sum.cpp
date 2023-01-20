class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();         //TC=O(n) , SC=O(1)
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + mat[i][i] + mat[i][n-1-i]; //mat[i][i] for primary and mat[i][n-1-i] for secondary
        }
        if(n%2==0)
            return sum;              // if matrix is even then no common element so return total sum
        else
            return sum - mat[n/2][n/2];   //if matrix is odd then middle element is the common element
    }
};


// Method: 1

//         int row = mat.size();
//         int col =mat[0].size();                  //TC = O(n^2) , SC = O(1)
//         int sum1 = 0;
//         int sum2 = 0;
        
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(i==j)
//                     sum1 += mat[i][j];
//                 if(i+j==col-1)
//                     sum2 += mat[i][j];
//             }
//         }
        
//         if(row%2==0)
//             return sum1+sum2;
//         else
//             return (sum1+sum2)-mat[row/2][row/2];