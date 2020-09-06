#include "solution.h"
#include<iostream>

//����ÿһ��ĺͣ�����˳���޶Խ��Ӱ��
void Solution::inorder(TreeNode* node, int level) {
    if (node != nullptr) {
        inorder(node->left, level + 1);
        level_sum[level] += node->val;
        inorder(node->right, level + 1);
    }
}

int Solution::maxLevelSum(TreeNode* root) {
    inorder(root, 1);
    int maxIdx = 0;
    for (int i = 0; i < level_sum.size(); i++) {
        maxIdx = level_sum[i] > level_sum[maxIdx] ? i: maxIdx;
    }
    return maxIdx;
}

