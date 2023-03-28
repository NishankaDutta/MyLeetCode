class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n,-1);              //TC = O(N) , sc = O(N)
        stack<int> st;
        
        for(int i=0;i<2*n;i++){
            while(!st.empty() && nums[st.top()] < nums[i%n]){
                nge[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return nge;
    }
};