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

    void inorder(TreeNode* root, vector<int>& vec){

        if(!root) return ;
        
        inorder(root->left, vec); // L
        vec.push_back(root-> val); // V
        inorder(root->right, vec); // R
    }

    TreeNode* bst(vector<int>& vec,int l, int r ){

        if(l > r) return NULL;

        // Finding the middle
        int mid = l + (r-l) / 2;

        TreeNode* root = new TreeNode(vec[mid]);

        root->left = bst(vec, l, mid-1);
        root->right = bst(vec, mid+1, r);

        return root;
        
    }

    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> vec;
        inorder(root, vec);

        // construct of the BST
        int left = 0;
        int right = vec.size()-1;
        return bst(vec, left, right);

        
    }
};