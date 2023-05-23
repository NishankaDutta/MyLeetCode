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
    vector<int> postorderTraversal(TreeNode* root) {   
        vector<int> postorder;          //Iterative way:  TC = O(N) , SC = O(2N)
        stack<TreeNode*> st1,st2;
        
        if(root == NULL)
            return postorder;
        
        st1.push(root);
        
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);
            
            if(root->left != NULL)
                st1.push(root->left);
            if(root->right != NULL)
                st1.push(root->right);
        }
        
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};


//1. Using Recursion:

// void helper(TreeNode* root, vector<int>& res){    //TC = O(N), SC = O(N)   :->Using Recursion
//         if(root == NULL)
//             return;
        
//         helper(root->left, res);
//         helper(root->right, res);
//         res.push_back(root->val);
//     }
    
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> res;
//         helper(root, res);
//         return res;
//     }