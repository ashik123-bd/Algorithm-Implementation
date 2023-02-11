#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}
int main()
{
	vector<int> vec1;
	int size,element;
	cout<<"Enter the size::\n";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter the element of -"<<i+1<<":";
		cin>>element;
		vec1.push_back(element);
	}
	display(vec1);
	vector<int> :: iterator itr = vec1.end();
	vec1.insert(itr,10);
	display(vec1);
}