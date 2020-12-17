// find a value in BST
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
Node* insert(Node* root, int val)
{
	if (root == NULL)
	{
		return newNode(val);
	}
	if (val < root->val)
	{
		root->left = insert(root->left, val);
	}
	else
	{
		root->right = insert(root->right, val);
	}
	return root;
}
bool findValue(Node* root, int k)
{
	if (!root)
		return false;
	if (root->val == k)
		return true;
	else if (k < root->val)
		findValue(root->left, k);
	else if (k > root->val)
		findValue(root->right, k);
	else
		return false;
}
int main(int argc, char**)
{
	Node* root = NULL;
	int arr[] = {50, 30, 20, 40, 70, 60, 80};
	for (auto val : arr)
	{
		root = insert(root, val);
	}
	int k;
	cin >> k;
	if (findValue(root, k))
		cout << "Value is present" << endl;
	else
		cout << "Value isn't present" << endl;
	return 0;
}