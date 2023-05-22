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
    vector<int> preorderTraversal(TreeNode* root) {       
        vector<int> preorder;         //Using Iterative method: TC = O(N), SC = O(N)
        stack<TreeNode*> st;
        
        if(root == NULL)
            return preorder;
        
        st.push(root);
        
        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
            
            if(root->right != NULL)
                st.push(root->right);
            
            if(root->left != NULL)
                st.push(root->left);
        }
        return preorder;
    }
};

//1. Using recursion: ->

// void helper(TreeNode* root, vector<int>& res){     //using recursion: TC = O(N), SC = O(1)
//         if(root == NULL)
//             return;
        
//         res.push_back(root->val);
//         helper(root->left, res);
//         helper(root->right, res);
//     }
    
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> res;
//         helper(root,res);
//         return res;
//     }