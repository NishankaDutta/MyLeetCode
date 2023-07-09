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
    int preInd = 0;
    TreeNode* buildTree_helper(vector<int>& preorder,vector<int>& inorder,int inStart,int inEnd) {
        if(inStart > inEnd)
            return NULL;
        
        TreeNode* node=new TreeNode(preorder[preInd++]);
        
        int rootIndex = -1;
        for(int i=inStart; i<=inEnd; i++){
            if(inorder[i] == node->val){
                rootIndex = i;
                break;
            }
        }
        
        node->left = buildTree_helper(preorder,inorder,inStart,rootIndex-1);
        node->right = buildTree_helper(preorder,inorder,rootIndex+1,inEnd);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inStart = 0;
        int inEnd = inorder.size()-1;
        
        return buildTree_helper(preorder,inorder,inStart,inEnd);
    }
};