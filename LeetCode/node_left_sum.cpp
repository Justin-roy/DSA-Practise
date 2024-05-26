#include <iostream>
#include <string>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if (root == nullptr)
            return 0;

        if (root->left != nullptr) {
            if (!root->left->left && !root->left->right)
                ans += root->left->val;
            else
                ans += sumOfLeftLeaves(root->left);
        }
        ans += sumOfLeftLeaves(root->right);
        return ans;
    }
};

int main(){
   return false;
} 