class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int n = words[i].size()-1;
            if(words[i][0] == 'a' || words[i][0] == 'e'|| words[i][0] == 'i'|| words[i][0] == 'o'|| words[i][0] == 'u'){
                if(words[i][n] == 'a' || words[i][n] == 'e'|| words[i][n] == 'i'|| words[i][n] == 'o'|| words[i][n] == 'u')
                    count++;
            }
                
        }
        return count;
    }
};