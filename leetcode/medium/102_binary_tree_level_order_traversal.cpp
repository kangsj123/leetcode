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
        if(root==NULL)return {};
        
        vector<vector<int>>levels;
        queue<pair<TreeNode*,int>>qu;
        qu.push(make_pair(root,0));
        
        while(!qu.empty()){
            TreeNode* node=qu.front().first;
            int lev=qu.front().second;
            qu.pop();
            if(levels.size()-1==lev)
                levels[lev].push_back(node->val);
            else
                levels.push_back({node->val});
            
            if(node->left)
                qu.push(make_pair(node->left,lev+1));
            if(node->right)
                qu.push(make_pair(node->right,lev+1));
        }
        return levels;
    }
};
