#include<iostream>
using namespace std;

void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[] = {4,3,5,1,2};
    int n=5;
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}

//Time complexity = O(n^2)