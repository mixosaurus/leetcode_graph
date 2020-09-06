#pragma once
#include<string>
#include<utility>
#include<map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right) :val(x), left(left), right(right) {};
};

class Solution {
private:
    map<int, int> level_sum;
public:
    void inorder(TreeNode* node, int level);
    int maxLevelSum(TreeNode* root);
};

