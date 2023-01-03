class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, int> m;
                                            //TC=O(k^2) or O(9^2) , SC=O(k^2) or O(9^2)
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string row = "row"+to_string(i)+board[i][j];
                    string col = "col"+to_string(j)+board[i][j];
                    string box = "box"+to_string((i/3)*3+(j/3))+board[i][j];

                    if(m[row]!=1 && m[col]!=1 && m[box]!=1){
                        m[row]=1;
                        m[col]=1;
                        m[box]=1;
                    }
                    else{
                        return false;
                    }
                }  
            }
        }
        return true;
    }
};


//1. USING SET:    both are same technique only data-structure is different.

//         set<string> s;
//                                             //TC=O(k^2) or O(9^2) , SC=O(k^2) or O(9^2)
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 if(board[i][j]!='.'){
//                     string row = "row"+to_string(i)+board[i][j];
//                     string col = "col"+to_string(j)+board[i][j];
//                     string box = "box"+to_string((i/3)*3+(j/3))+board[i][j];

//                     if(s.find(row)==s.end() && s.find(col)==s.end() && s.find(box)==s.end()){
//                         s.insert(row);
//                         s.insert(col);
//                         s.insert(box);
//                     }
//                     else{
//                         return false;
//                     }
//                 }  
//             }
//         }
//         return true;