/*
    Probelm : Cousins in Binary Tree
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

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
    int findLevel(TreeNode* root, int lvl, int v){
        if(root==nullptr){
            return 0;
        }
        if(root->val == v){
            return lvl;
        }
        int temp = findLevel(root->left,lvl+1,v);
        if(temp>0){
            return temp;
        }
        return findLevel(root->right,lvl+1,v);
    }
    
    TreeNode* findParent(TreeNode* root, TreeNode* parent, int v){
        if(root == nullptr){
            return nullptr;
        }
        if(root->val == v){
            return parent;
        }
        TreeNode* left = findParent(root->left, root, v);
        if(left != nullptr){
            return left;
        }
        return findParent(root->right, root, v);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if( (findParent(root, nullptr, x) != findParent(root, nullptr, y) ) && findLevel(root,0,x) == findLevel(root,0,y)){
            return true;
        }
        return false;
    }
};