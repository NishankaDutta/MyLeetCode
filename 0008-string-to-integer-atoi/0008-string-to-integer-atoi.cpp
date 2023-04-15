class Solution {
public:
    int myAtoi(string s) {             //TC = O(N), SC = O(1)
        if(s.length() == 0)
            return 0;
        
        int i=0;
        while(i<s.size() && s[i]==' ')
            i++;
        
        s = s.substr(i);//it means if s="  -4123abc",i will be from - sign after removing the spaces
        
        int sign = 0;
        long ans = 0;
        
        if(s[0] == '-')
            sign = -1;
        else
            sign = +1;
        
        if(s[0]=='-' || s[0]=='+')
            i=1;
        else
            i=0;
        
        while(i<s.size()){
            if(s[i] == ' ' || !isdigit(s[i]))
                break;
            
            ans = ans*10 + (s[i] - '0');
        
            int max = INT_MAX, min = INT_MIN;
            if(sign == -1 && -1*ans < min)
                return min;
            if(sign == +1 && +1*ans > max)
                return max;

            i++;
        }
        return int(sign*ans);
    }
};