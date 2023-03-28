class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge(nums.size(),-1);
        stack<int> st;
        int n = nums.size();                //TC = O(N) , SC = O(N)
        
        for(int i=0;i<=2*n-1;i++){
            while(!st.empty() && nums[st.top()]<nums[i%n]){
                nge[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return nge;
    }
};