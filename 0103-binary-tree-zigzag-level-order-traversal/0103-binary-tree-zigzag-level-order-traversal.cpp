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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        
        queue<TreeNode*> q; //This is same as level order traversal only diff is taking flag variable
        q.push(root);
        bool leftToRight = true;     //TC = O(N) , SC = O(N)
        
        while(!q.empty()){
            int size = q.size();
            vector<int> v(size);
            for(int i=0;i<size;i++){
                auto node = q.front();
                q.pop();
                
                int index = leftToRight ? i : (size-1-i);
                v[index] = node->val;
                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            leftToRight = !leftToRight;
            res.push_back(v);
        }
        return res;
    }
};