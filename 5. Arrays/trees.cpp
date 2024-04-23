
#include<bits/stdc++.h>
using namespace std;
/*
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
vector<int> ans;
    void preorder(TreeNode* node) {
        if (node == NULL) return;
        // do something with node value here
        ans.push_back(node->val);
        // traverse the left node
        preorder(node->left);
        // traverse the right node
        preorder(node->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};
