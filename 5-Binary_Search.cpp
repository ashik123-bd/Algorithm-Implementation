#include<iostream>
using namespace std;

int Binary_Search(int a[], int n, int x){
    int left = 0;
    int right = n-1;
    int mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == x){
            return mid;
        }
        if(a[mid] < x){
            left = mid + 1;

        }
        else{
            right = mid - 1;
        }
    }
}

int main()
{
    int a[] = {10,14,19,26,27,31,48};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 27;

    int result = Binary_Search(a,n,x);
    cout<<" 27 is present in index number:: "<<result;

    return 0;
}
