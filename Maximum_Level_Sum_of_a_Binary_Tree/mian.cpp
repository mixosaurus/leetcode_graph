#include "solution.h"
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

//����������ǵݹ�
void traverseInorderNonRecursion(TreeNode* root) {
	if (root == nullptr) {
		cout << "������Ϊ��" << endl;
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

//ǰ��������ǵݹ�
void traversePreorderNonRecursion(TreeNode* root) {
	if (root == nullptr) {
		cout << "������Ϊ��" << endl;
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

//�ֶ����������������ڽڵ�ֵ�����ظ������
TreeNode* createBinaryTreeManually() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(7);
	root->right = new TreeNode(0);
	root->left->left = new TreeNode(7);
	root->left->right = new TreeNode(-8);
	return root;
}

//1161. ������Ԫ�غ�
int main() {
	Solution solution;
	TreeNode* root = createBinaryTreeManually();
	cout<<solution.maxLevelSum(root)<<endl;
	system("pause");
	return 0;
}