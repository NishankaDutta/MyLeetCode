class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i=0;i<indices.size();i++){    //TC = O(N) , SC = O(N)
            res[indices[i]] = s[i];
        }
        return res;
    }
};