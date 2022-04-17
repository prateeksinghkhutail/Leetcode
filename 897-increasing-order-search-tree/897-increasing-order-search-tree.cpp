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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *head = new TreeNode(0), *tail = head, *prev, *tmp;
        while (root != nullptr) {
            if (root->left != nullptr) {
                prev = root->left;
                while (prev->right != nullptr) prev = prev->right;
                prev->right = root;
                tmp = root->left;
                root->left = nullptr;
                root = tmp;
            } else {
                tail->right = root;
                tail = tail->right;
                root = root->right;
            }
        }
        return head->right;
    }

};