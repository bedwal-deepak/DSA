//left view of binary tree
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int val;
  Node *right, *left;
};

Node* newNode(int key)
{
  Node* temp = new Node;
  temp->val = key;
  temp->right = temp->left = NULL;
  return temp;
}

int maxLevel = 0;
void leftView(Node* root, int level) { //preorder traversal
  if (!root) return;

  if (level > maxLevel) {
    cout << root->val << " ";
    maxLevel++;
  }

  leftView(root->left, level + 1);
  leftView(root->right, level + 1);
}

int main() {
  Node* root = NULL;
  root = newNode(6);
  root->left = newNode(3);
  root->right = newNode(8);
  root->left->left = newNode(1);
  root->left->right = newNode(7);
  root->right->left = newNode(4);
  root->right->right = newNode(2);
  root->right->left->left = newNode(1);
  root->right->left->right = newNode(7);
  root->right->right->right = newNode(3);
  leftView(root, 1);
  return 0;
}