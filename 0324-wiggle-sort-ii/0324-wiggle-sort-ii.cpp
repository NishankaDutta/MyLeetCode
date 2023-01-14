class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> pq(nums.begin(),nums.end());       //TC = O(N) , SC = O(N)
        
        for(int i=1;i<n;i+=2){
            nums[i] = pq.top();
            pq.pop();
        }
        
        for(int i=0;i<n;i+=2){
            nums[i] = pq.top();
            pq.pop();
        }
    }
};



//1. USING SORTING AND TWO POINTER(easiest method):->         REVISE IT!!!!!!!!!!!!!!

//         int n = nums.size();
//         sort(nums.begin(),nums.end());         // TC = O(nlogn) , SC=O(n)
//         vector<int> temp(n);
        
//         int i=1;
//         int j=n-1;
        
//         while(i<n){
//             temp[i] = nums[j];
//             i=i+2;
//             j--;
//         }
        
//         i=0;
//         while(i<n){
//             temp[i] = nums[j];
//             i=i+2;
//             j--;
//         }
        
//         nums=temp;