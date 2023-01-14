#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
void Linked_List_Traversal(struct Node *ptr){
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head ->data = 7;
	head->next = second;
	
	second->data = 11;
	second->next = third;
	
	third->data = 41;
	third->next = fourth;
	fourth->data = 66;
	fourth->next = NULL;
	
	Linked_List_Traversal(head);
	
	return 0;
}
