#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;
void Print(){
    struct Node* temp;
    temp= head;
    while(temp !=0){
        cout<<" "<<
		
		
		temp->data;
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec;
    sec = (struct Node*)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = sec;

    sec->data = 5;
    sec->next = NULL;

    Print();


}