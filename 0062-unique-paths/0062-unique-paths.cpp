class Solution {
public:
    int uniquePaths(int m, int n){
        int N = m+n-2;
        int r = m-1;
        double res = 1;          //TC = O(m-1) , SC = O(1)
        
        for(int i=1;i<=r;i++){
            res = res*(N-r+i)/i;
        }
        return res;
    }
};





//2. Using DP: (Good Solution)

// int countPaths(int i,int j,int m,int n, vector<vector<int>> &dp){
//         if(i>=m || j>=n)
//             return 0;
//         if(i==m-1 && j==n-1)             //TC = O(M*N) , SC = O(M*N)
//             return 1;
//         if(dp[i][j] != -1)
//             return dp[i][j];
//         else
//             return dp[i][j] = countPaths(i+1,j,m,n,dp) + countPaths(i,j+1,m,n,dp);
//     }
    
//     int uniquePaths(int m, int n){
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return countPaths(0,0,m,n,dp);
//     }


//3. Using Recursion(Brute-Force): (Gives TLE)  ---> TC = O(2^m*n) , SC = O(2^m*n)

// int countPaths(int i, int j, int m, int n){
//     if(i>=m || j>=n)
//         return 0;
//     if(i==m-1 && j==n-1)
//         return 1;
//     else
//         return countPaths(i+1,j,m,n)+countPaths(i,j+1,m,n);
//     }
    
//     int uniquePaths(int m, int n) {
//         return countPaths(0,0,m,n);
//     }