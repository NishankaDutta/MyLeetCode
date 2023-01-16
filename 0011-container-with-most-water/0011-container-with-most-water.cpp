class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0;
        int end = n-1;
        int area;                    //TC = O(n) , SC=O(1)
        int maxArea=INT_MIN;
        
        while(start<end){
            area = min(height[start], height[end]) * (end-start);
            maxArea = max(maxArea, area);
            
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return maxArea;
    }
};