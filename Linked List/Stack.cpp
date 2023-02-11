#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top = -1;

void push(){
	int x;
	cout<<"Enter data::";
	cin>>x;
	if(top==N-1){
		cout<<"Overflow";
	}
	else{
		top++;
		stack[top]=x;
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
		cout<<stack[top];
	}
}

void display(){
	int i;
	for(i=top;i>=0;i--){
		cout<<" "<<stack[i]<<endl;
	}
}

int main()
{
	int ch;
	do{
		cout<<"Enter your choice-->1:push, 2:pop, 3:top, 4:display::";
	cin>>ch;
	switch(ch)
	{
		case 1:
			push();
			break;
		case 2:
		    pop();
		    break;
		case 3:
		    peek();
		    break;
		case 4:
		    display();
			break;    
	    default:
		    cout<<"Invalid choice";			
	
	
}
	}while(ch!=0);
	

	
}