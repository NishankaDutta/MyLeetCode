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
    TreeNode* buildTree_helper(vector<int>& preorder,vector<int>& inorder,int preStart,int inStart,int inEnd) {
        if(preStart > preorder.size()-1 || inStart > inEnd)      //TC = O(N), SC = O(N)
            return NULL;
        
        int rootVal = preorder[preStart];
        TreeNode* node = new TreeNode(rootVal);
        
        int rootIndex = -1;
        for(int i=inStart; i<=inEnd; i++){
            if(inorder[i] == node->val){
                rootIndex = i;
                break;
            }
        }
        
        node->left = buildTree_helper(preorder, inorder, preStart+1, inStart, rootIndex-1);
        node->right = buildTree_helper(preorder, inorder, preStart+rootIndex-inStart+1, rootIndex+1, inEnd);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inStart = 0;
        int inEnd = inorder.size()-1;
        int preStart = 0;
        
        return buildTree_helper(preorder,inorder,preStart,inStart,inEnd);
    }
};