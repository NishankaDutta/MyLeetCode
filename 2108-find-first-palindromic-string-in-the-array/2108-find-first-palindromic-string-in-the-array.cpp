class Solution {
public:
    bool isPalindrome(string s){
        int i = 0, j = s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {       //TC = O(n^2)
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};