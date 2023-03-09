class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        
        for(auto x: nums){
            pq.push(x);
        }
        
        int max1 = pq.top();
        pq.pop();
        int max2 = pq.top();
        
        return (max1-1)*(max2-1);
    }
};