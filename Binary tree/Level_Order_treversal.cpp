// level order traversal
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int val;
	Node *right, *left;
};
Node* newNode(int val)
{
	Node* temp = new Node();
	temp->val = val;
	temp->right = temp->left = NULL;
	return temp;
}
void levelOrder(Node* root)
{
	if (!root)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* current = q.front();
		q.pop();
		cout << current->val << " ";
		if (current->left)
			q.push(current->left);
		if (current->right)
			q.push(current->right);
	}
}
int main(int argc, char**)
{
	Node* root = newNode(1);;
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	cout << "levelOrder traversal is:-";
	levelOrder(root);
	cout << endl;
	return 0;
}