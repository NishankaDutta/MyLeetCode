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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mp;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int line = p.second.first;
            int level = p.second.second;               //TC = O(N) , SC=O(N)
            mp[line][level].insert(node->val);
            
            if(node->left != NULL){
                q.push({node->left,{line-1,level+1}});
            }
            if(node->right != NULL){
                q.push({node->right,{line+1,level+1}});
            }
        }
        
        for(auto x: mp){
            vector<int> temp;
            for(auto z: x.second){
                temp.insert(temp.end(),z.second.begin(),z.second.end());
            }
            res.push_back(temp);
        }
        return res;
    }
};