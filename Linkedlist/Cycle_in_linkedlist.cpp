//Program to detect cycle in linkedlist
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
bool findCycle(Node* head)
{
	Node *slow_ptr = head, *fast_ptr = head;
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			return true;
		}
	}
	return false;
}
int main(int argc, char** argv)
{
	Node* head = NULL;
	int arr[] = {0, 1, 2, 3};
	for (auto val : arr)
	{
		head = insert(head, val);
	}
	//create cycle
	head->next->next->next = head->next;
	if (findCycle(head))
		cout << "Cycle is present!" << endl;
	else
		cout << "Cycle is not present!" << endl;
	return 0;
}