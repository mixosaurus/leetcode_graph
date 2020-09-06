#include "solution.h"
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

//中序遍历，非递归
void traverseInorderNonRecursion(TreeNode* root) {
	if (root == nullptr) {
		cout << "二叉树为空" << endl;
		return;
	}
	stack<TreeNode*> stack;
	TreeNode* p = root;
	while (!stack.empty() || p != nullptr) {
		while (p != nullptr) {
			stack.push(p);
			p = p->left;
		}
		if (!stack.empty()) {
			p = stack.top();
			stack.pop();
			cout << p->val << " ";
			p = p->right;
		}
	}
	cout << endl;
}

//前序遍历，非递归
void traversePreorderNonRecursion(TreeNode* root) {
	if (root == nullptr) {
		cout << "二叉树为空" << endl;
		return;
	}
	stack<TreeNode*> stack;
	TreeNode* p = nullptr;
	stack.push(root);
	while (!stack.empty()) {
		p = stack.top();
		stack.pop();
		cout << p->val << " ";
		if (p->right != nullptr) {
			stack.push(p->right);
		}
		if (p->left != nullptr) {
			stack.push(p->left);
		}
	}
}

//手动建立二叉树，用于节点值允许重复的情况
TreeNode* createBinaryTreeManually() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(7);
	root->right = new TreeNode(0);
	root->left->left = new TreeNode(7);
	root->left->right = new TreeNode(-8);
	return root;
}

//1161. 最大层内元素和
int main() {
	Solution solution;
	TreeNode* root = createBinaryTreeManually();
	cout<<solution.maxLevelSum(root)<<endl;
	system("pause");
	return 0;
}