class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        
        for(auto word: words){
            string code = "";
            for(auto ch: word){
                code += morse_code[ch - 'a'];
            }
            st.insert(code);
        }
        return st.size();
    }
};