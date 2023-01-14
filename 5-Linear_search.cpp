#include<iostream>
using namespace std;

int Linear_search(int a[],int n, int x){
    for(int i=0;i<n;i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {10,4,5,2,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 5;

    int result = Linear_search(a,n,x);

    cout<<"5 is present in index number:: "<<result;
}
