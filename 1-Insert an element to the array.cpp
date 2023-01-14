#include<iostream>
using namespace std;
int main()
{
	int a[] = {2,5,7,8,10};
	int size = sizeof(a)/sizeof(a[0]);
	int num,pos;
	//print the given array
	cout<<"The given array::\n";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the number to insert::\n";
	cin>>num;
	cout<<"Enter the position to insert the number::\n";
	cin>>pos;
	
	for(int i=size-1;i>=pos-1;i--){
		a[i+1] = a[i];
	}
	size++;
	a[pos-1] = num;
	// print the inserted array
	cout<<"The array after insert the number::\n";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}