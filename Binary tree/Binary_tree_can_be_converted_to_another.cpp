//Determine if a binary tree can be converted to another by doing any number of swaps of children
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

bool equal(Node* X, Node* Y) {
  //if both trees are empty or root of both are equal
  if (X == Y) {
    return true;
  }
  //either both trees are same or can be transformed into each other
  return (X && Y) && (X->val == Y->val) && ((equal(X->left, Y->left) && equal(X->right, Y->right)) ||
         (equal(X->right, Y->left) && equal(X->left, Y->right)));
}

int main() {
  Node* root1 = NULL;
  root1 = newNode(6);
  root1->left = newNode(3);
  root1->right = newNode(8);
  root1->left->left = newNode(1);
  root1->left->right = newNode(7);
  root1->right->left = newNode(4);
  root1->right->right = newNode(2);
  root1->right->left->left = newNode(1);
  root1->right->left->right = newNode(7);
  root1->right->right->right = newNode(3);

  Node* root2 = nullptr;
  root2 = newNode(6);
  root2->left = newNode(8);
  root2->right = newNode(3);
  root2->left->left = newNode(2);
  root2->left->right = newNode(4);
  root2->right->left = newNode(7);
  root2->right->right = newNode(1);
  root2->left->left->left = newNode(3);
  root2->left->right->left = newNode(1);
  root2->left->right->right = newNode(7);

  if (equal(root1, root2)) {
    cout << "Binary tree can be converted";
  }
  else {
    cout << "Binary tree cannot be converted";
  }
  cout << endl;
  return 0;
}