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
    int widthOfBinaryTree(TreeNode* root) {       //TC = O(N*M)
        queue<pair<TreeNode*,int>> q;
        long ans=0;
        q.push({root,0});
        
        while(!q.empty()){
            int size = q.size();
            long start = q.front().second;
            long end = q.back().second;
            ans = max(ans, end-start+1);
            
            while(size--){
                auto p = q.front();
                TreeNode* node = p.first;
                long idx = p.second;
                q.pop();
                
                if(node->left != NULL){
                    q.push({node->left, 2*idx+1});
                }
                if(node->right != NULL){
                    q.push({node->right, 2*idx+2});
                }
            }
        }
        return ans;
    }
};