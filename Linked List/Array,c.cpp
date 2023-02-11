#include<iostream>
using namespace std;

int Linear_search(int a[], int n,int k){
	for(int i=0;i<n;i++){
		if(a[i] == k){
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[5] = {10,12,20,23,8};
	int n= 5;
	int k = 20;
	cout<<Linear_search(a,n,k);
}