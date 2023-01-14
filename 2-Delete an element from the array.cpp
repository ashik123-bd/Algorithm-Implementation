#include<iostream>
using namespace std;
int main()
{
	int a[6] = {1,2,2,3,4,5};
	int size=6;
	int num,pos,i;
	for(i=0;i<size;i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
	cout<<"Enter the number::\n";
	cin>>num;
	cout<<"Enter the position::\n";
	cin>>pos;
	if(pos<=0 || pos>size){
		cout<<"Invalid position";
	}
	else{
		for(i=pos-1;i<size-1;i++){
			a[i] = a[i+1];
		}
		size--;
	}
		for(i=0;i<size;i++){
		cout<<" "<<a[i];
	}
	
}