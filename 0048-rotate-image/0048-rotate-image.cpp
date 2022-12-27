class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();               //TC = O(n^2) , SC=O(1)
        
        for(int i=0;i<n;i++){                //Transpose Matrix: TC=O(n^2) 
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){                //Reverse every row of the matrix: TC=O(n^2)
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};