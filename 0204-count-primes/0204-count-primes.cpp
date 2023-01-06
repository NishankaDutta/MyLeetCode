class Solution {
public:
    int countPrimes(int n) {
        
        bool *isPrime = new bool[n];
        
        for(int i=2;i<n;i++){
            isPrime[i] = true;
        }
        
        for(int i=2;i*i<n;i++){
            if(!isPrime[i])
                continue;
            for(int j=i*i;j<n;j=j+i){
                isPrime[j] = false;
            }
        }
        
        int count=0;
        
        for(int i=2;i<n;i++){
            if(isPrime[i])
                count++;
        }
        return count;
    }
};