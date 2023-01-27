class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        //TC = O(n*m) , SC =O(1)..here n = length of the string and m = length of the vector
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0][i] != strs[j][i])
                    return res;
            }
            res += strs[0][i]; 
        }
        return res;
    }
};