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
    TreeNode* buildTree_helper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int poStart, int poEnd) {
        if(inStart > inEnd || poStart > poEnd)
            return NULL;
        
        int rootVal = postorder[poEnd];
        TreeNode* node = new TreeNode(rootVal);
        
        int rootIndex = -1;
        for(int i=inStart;i<=inEnd;i++){
            if(inorder[i] == node->val){
                rootIndex = i;
                break;
            }
        }
        
        int numsLeft = rootIndex - inStart;
        
        node->left = buildTree_helper(inorder, postorder, inStart, rootIndex-1, poStart, poStart+numsLeft-1);
        node->right = buildTree_helper(inorder, postorder, rootIndex+1, inEnd, poStart+numsLeft, poEnd-1);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int inStart = 0;
        int inEnd = inorder.size()-1;
        int poStart = 0;
        int poEnd = postorder.size()-1;
        
        return buildTree_helper(inorder,postorder,inStart,inEnd,poStart,poEnd);
    }
};