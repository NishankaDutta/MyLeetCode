class Solution {
public:
    bool isAnagram(string s, string t) {
     
        if(s.length()!=t.length()){
            return false;
        }
        
//         int hash[26] = {0};
        
//         for(int i=0;i<s.length();i++){          //TC = O(N)
//             hash[s[i]-'a']++;
//             hash[t[i]-'a']--;
//         }
        
//         for(int i=0;i<26;i++){
//             if(hash[i]!=0)
//                 return false;
//         }
//         return true;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
//         for(auto x: s){
//             mp1[x]++;
//         }
        
//         for(auto x: t){
//             mp2[x]++;
//         }
        
//         for(int i=0;i<s.length();i++){
//             if(mp1[t[i]] != mp2[t[i]])
//                 return false;
//         }
        
//         return true;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)
            return true;
        else
            return false;
        
        
        
    /*  sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        
        if(s==t)
            return true;
        else
            return false;  
    
    */
    } 
};