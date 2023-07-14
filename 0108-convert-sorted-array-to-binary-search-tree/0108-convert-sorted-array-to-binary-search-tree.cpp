/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bst(vector<int>& nums, int start, int end){
        if(start > end)       //base condition
            return NULL;
        
        int midpoint = start + (end-start)/2;   //finding the midpoint
        
        TreeNode* node = new TreeNode(nums[midpoint]);//creating a new node by taking the mid as root
        
        node->left = bst(nums, start, midpoint-1);   //left recursion
        node->right = bst(nums, midpoint+1, end);  //right recursion
        
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {  // TC = O(N) , SC = O(H) -> height of the tree
        if(nums.size() == 0)
            return NULL;
        
        int start = 0;
        int end = nums.size()-1;
        
        return bst(nums,start,end);
    }
};