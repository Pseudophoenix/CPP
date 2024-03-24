#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // BFS
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            cout << "[" << size << "]";
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

int main() {
    // Creating a simple 9-node binary tree with random values
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);

    // Using the Solution class for level order traversal
    Solution solution;
    vector<vector<int>> result = solution.levelOrder(root);

    // Outputting the result
    cout << "\nLevel Order Traversal:\n";
    for (const vector<int>& level : result) {
        for (int value : level) {
            cout << value << " ";
        }
        cout << endl;
    }

    // Cleanup: free allocated memory
    delete root->left->left->right;
    delete root->left->left->left;
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
