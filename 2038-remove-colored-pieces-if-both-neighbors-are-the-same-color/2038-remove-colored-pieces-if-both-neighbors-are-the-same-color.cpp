class Solution {
public:
    bool winnerOfGame(string colors) {
        int cntA=0,cntB=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i-1]=='A' && colors[i+1]=='A' && colors[i]=='A')
                cntA++;
            if(colors[i-1]=='B' && colors[i+1]=='B' && colors[i]=='B')
                cntB++;
        }
        return cntA>cntB;
    }
};