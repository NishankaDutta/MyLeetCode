class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        
        for(auto k: nums3){
            for(auto l: nums4){          //TC = O(N^2) , SC = O(N^2)
                mp[k+l]++;
            }
        }
        
        int count = 0;
        for(auto i:nums1){
            for(auto j:nums2){
                if(mp.find(-(i+j)) != mp.end())
                    count += mp[-(i+j)];
            }
        }
        return count;
    }
};


//1. BRUTE-FORCE:(TIME-LIMIT EXCEEDED)    TC = O(n^4)

//         int count=0;
//         int n=nums1.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;i<n;j++){
//                 for(int k=0;i<n;k++){
//                     for(int l=0;i<n;l++){
//                         if(nums1[i]+nums2[j]+nums3[k]+nums4[l]==0)
//                             count++;
//                     }  
//                 }   
//             }  
//         }   
//         return count;


//2. using 3 loop:(TIME-LIMIT EXCEEDED)     TC = O(N^3) , SC = O(N)

//         unordered_map<int, int> mp;    
//         for(auto x: nums4){             // TC = O(N^3) , SC=O(N)
//             mp[x]++;
//         }
        
//         int count=0;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 for(int k=0;k<nums3.size();k++){
//                     int tSum = nums1[i]+nums2[j]+nums3[k];
                    
//                     if(mp.find(-tSum)!=mp.end())
//                         count += mp[-tSum];
//                 }
//             }
//         }
//         return count;