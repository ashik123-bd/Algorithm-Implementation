#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;

void push()
{
	int x;
	cout<<"Enter the data::";
	cin>>x;
	if(top==N-1){
		cout<<"Overflow";
	}
	else{
		stack[top] = x;
		top++;
	}
}

void pop()
{
	int item;
	if(top==-1){
		cout<<"Underflow";
	}
	else{
		item = stack[top];
		top--;
		cout<<item;
	}
}
void peek()
{
	if(top==-1){
		cout<<"Stack is empty";
	}
	else{
		
	}
}
void display()
