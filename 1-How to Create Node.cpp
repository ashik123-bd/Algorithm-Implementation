#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *create_node(int item, struct Node *next){
	struct Node *new_node;
	new_node = (struct Node *)malloc(sizeof(struct Node));
	if(new_node==NULL){
		cout<<"Error! Couldn't create a node\n";
		exit(1);
	}
	new_node->data = item;
	new_node->next = next;
	
	return new_node;
}

int main()
{
	struct Node *n;
	n = create_node(10,NULL);
	cout<<n->data;
	
	return 0;
}
