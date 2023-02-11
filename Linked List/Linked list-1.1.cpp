#include<iostream>
#include<cstdio>
#include<stdlib.h>

using namespace std;

struct Node
{
	int data;
	struct Node *next;	
};

struct Node *CreateNode(int item,struct Node *next){
	struct Node *NewNode;
	
	NewNode = (struct Node*)malloc(sizeof(struct Node));
	
	if(NewNode == NULL){
		cout<<"Error! Couldn't Create a Node\n";
		exit(1);
	}
	
	NewNode->data = item;
	NewNode->next = next;
	
	return NewNode;
}

int main()
{
	struct Node *n;
	n = CreateNode(10,NULL);
	cout<<n->data;
	
	return 0;
}