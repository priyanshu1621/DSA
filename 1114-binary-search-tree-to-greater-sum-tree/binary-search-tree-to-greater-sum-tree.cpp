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



// As global variable
//  int sum = 0;

void solve(TreeNode* root, int &sum){

    if(!root) return;

    solve(root-> right , sum);
    sum += root-> val;
    root-> val = sum;

    solve(root->left, sum);
}


class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        // If we are sending inside fn then by reference 
        // or other option make a global var

        int sum  = 0;
        solve(root, sum);

        // Here the approach is, we are first approach the right root , then left , and root
        // as the right root val is larger then root.

        return root;
    }
};