/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
#include <stdbool.h>

int Target_sum;

bool check_path_sum(TreeNode root , int sum)
{
    if(!root) return false;
    sum += root->val;

    if(check_path_sum(root->left, sum)) return true;
    if(check_path_sum(root->right, sum)) return true;
    
    if(!root->left && !root->right)
        if(sum == Target_sum)  return true; 
    return false;
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    Target_sum = targetSum;
    return check_path_sum(root, 0);
}