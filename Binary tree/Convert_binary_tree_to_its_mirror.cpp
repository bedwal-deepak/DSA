//Convert a binary tree to its mirror
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

void convertToMirror(Node* X, Node* Y) {
  if (!X && !Y) {
    return;
  }

  if (X && Y) {
    int leftValue = X->val;
    int rightValue = Y->val;

    X->val = rightValue;
    Y->val = leftValue;

    convertToMirror(X->left, Y->right);
    convertToMirror(X->right, Y->left);
  }
}

void convertToMirror(Node* root) {
  if (!root) return;

  convertToMirror(root->left, root->right);
}

//Here we are travesing in postorder fashion
// void convertToMirror(Node* root)
// {
//   // base case: if the tree is empty
//   if (root == nullptr) {
//     return true;
//   }

//   // convert left subtree
//   convertToMirror(root->left);

//   // convert right subtree
//   convertToMirror(root->right);

//   // swap left subtree with right subtree
//   swap(root->left, root->right);
// }

void printTree(Node *root) {
  if (!root) return;
  //inorder traversal
  printTree(root->left);
  cout << root->val << " ";
  printTree(root->right);
}

int main() {
  Node* root = NULL;
  root = newNode(1);;
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);

  printTree(root);
  cout << endl;
  convertToMirror(root);
  printTree(root);
  return 0;
}