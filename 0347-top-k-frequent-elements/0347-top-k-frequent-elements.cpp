class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;                
        unordered_map<int,int> m;       //TC = O(nlogk) , SC=O(k)
                                        //using MIN HEAP and HashMap
        for(auto x: nums){
            m[x]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;
        
        for(auto x: m){
            min_heap.push({x.second,x.first});
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        
        while(k--){
            ans.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return ans;
    }
};