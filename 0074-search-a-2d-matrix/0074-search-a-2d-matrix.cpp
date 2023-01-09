class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();      // TC = O(log(m*n)) , SC=O(1)
        
        int start = 0;
        int end = row*col-1;
          
        while(start<=end){
            int mid = start+(end-start)/2; //mid=(start+end)/2;can cause overflow,it's better to use this.
            int element = matrix[mid/col][mid%col];
            
            if(element==target)
                return true;
            else if(element<target)
                start=mid+1;
            else
                end=mid-1;
            
            
        }
        return false;
    }
};