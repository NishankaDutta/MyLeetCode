class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        priority_queue<pair<int, string>> pq;
        
        for(int i=0;i<heights.size();i++){              //TC = O(nlogn)  -->max heap
            pq.push({heights[i], names[i]});
        }
        
        vector<string> ans;
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};