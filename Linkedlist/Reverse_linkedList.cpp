//Reverse linked list using iteration
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int val;
	Node* next;
};
Node* insert(Node* head, int val)
{
	Node* temp = new Node();
	temp->val = val;
	temp->next = head;
	head = temp;
	return head;
}
Node* reverseList(Node* head)
{
	Node *current, *prev, *Next;
	current = head;
	prev = NULL;
	while (current != NULL)
	{
		Next = current->next;
		current->next = prev;
		prev = current;
		current = Next;
	}
	head = prev;
	return head;
}
void printList(Node* head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main(int argc, char**)
{
	Node* head = NULL;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
	for (auto val : arr)
	{
		head = insert(head, val);
	}
	printList(head);
	head = reverseList(head);
	printList(head);
	return 0;
}