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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        
        if(root == NULL)              //TC = O(N) , SC=O(N)
            return res;
        
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            
            while(size--){
                TreeNode* p = q.front();
                q.pop();
                
                if(p->left != NULL){
                    q.push(p->left);
                }
                if(p->right != NULL){
                    q.push(p->right);
                }
                
                v.push_back(p->val);
            }
            res.push_back(v);
        }
        return res;
    }
};