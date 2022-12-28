class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            pq.pop();
        }
        return pq.top();
    }
};

    //Using SORTING:   TC=O(nlgon) , SC=O(1)

    // sort(nums.begin(),nums.end());   //Ascending order sort
    // for(int i=0;i<nums.size();i++){
    //     return nums[nums.size()-k];
    // }
    // return 0;

                    //OR

    // sort(nums.begin() , nums.end() , greater<int>());  //Descending order sort
    //      return nums[k-1];