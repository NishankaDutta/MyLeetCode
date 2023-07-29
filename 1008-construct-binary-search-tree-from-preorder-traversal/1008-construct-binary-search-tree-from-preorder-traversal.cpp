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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == NULL)
            return NULL;
        
        int root_value = preorder[0];      //TC = O(N^2) --> Brute Force method
        
        TreeNode* node = new TreeNode(root_value);
        
        vector<int> smaller,greater;
        for(int i=1;i<preorder.size();i++){
            if(preorder[i]<root_value)
                smaller.push_back(preorder[i]);
            else
                greater.push_back(preorder[i]);
        }
        
        node->left = bstFromPreorder(smaller);
        node->right = bstFromPreorder(greater);
        return node;
    }
};


//Method 2: if we sort the preorder then we will get the inorder.....if we get both the inorder and preorder tarversal then we can create a bst from them with a time complexity of O(nlogn)