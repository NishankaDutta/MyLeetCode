class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(int i=0;i<columnTitle.size();i++){       //TC = O(N) , SC = O(1)
            result *= 26;
            result += columnTitle[i] - 'A' + 1;
        }
        return result;
    }
};