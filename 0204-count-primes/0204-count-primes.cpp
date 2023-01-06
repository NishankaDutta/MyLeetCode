class Solution {
public:
    int countPrimes(int n) {
        
        bool *isPrime = new bool[n];     //Using sieve of Eratosthenes || TC=O(NloglogN)
        
        for(int i=2;i<n;i++){
            isPrime[i] = true;
        }
        
        for(int i=2;i<n;i++){
            if(!isPrime[i])
                continue;
            for(int j=2*i;j<n;j=j+i){
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