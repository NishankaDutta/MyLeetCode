class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
            return 1;
        else
            return 0;
    }
    
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch;
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool checkPalindrome(string str){
        int s = 0;
        int e = str.length()-1;
        
        for(int i=0;i<str.length();i++){
            if(str[s] != str[e])
                return false;
            else{
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {           //TC = O(N)
        string temp = "";
        //Remove all the unnecessary characters except alphabet and numbers 
        for(int i=0;i<s.length();i++){
            if(valid(s[i]))
                temp.push_back(s[i]);
        }
        
        //convert all characters to lowercase
        for(int i=0;i<temp.length();i++){
            temp[i] = toLowerCase(temp[i]);
        }
        
        //Return if the string is palindrome or not
        return checkPalindrome(temp);
    }
};