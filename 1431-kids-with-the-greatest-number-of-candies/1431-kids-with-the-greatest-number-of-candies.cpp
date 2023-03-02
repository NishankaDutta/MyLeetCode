class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max = *max_element(candies.begin(),candies.end());
        
        for(auto x: candies){
            if(x + extraCandies >= max)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};