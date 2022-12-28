class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;  //USING MIN-HEAP: TC=O(nlogk), SC=O(k)
        
        for(int i=0;i<nums.size();i++){
            if(pq.size()<k){
                pq.push(nums[i]);
            }
            else{
                if(nums[i]>pq.top()){
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
        return pq.top();
    }
};

    //1. Using SORTING:   TC=O(nlgon) , SC=O(1)

    // sort(nums.begin(),nums.end());   //Ascending order sort
    // for(int i=0;i<nums.size();i++){
    //     return nums[nums.size()-k];
    // }
    // return 0;

                    //OR

    // sort(nums.begin() , nums.end() , greater<int>());  //Descending order sort
    //      return nums[k-1];

    
    //2. USING MAX-HEAP:    TC=O(nlogn) , SC=O(n)
    
    // priority_queue<int> pq; 
    // for(int i=0;i<nums.size();i++){
    //     pq.push(nums[i]);
    // }
    // for(int i=0;i<k-1;i++){
    //     pq.pop();
    // }
    // return pq.top();