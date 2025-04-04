//Quick sort

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int st,int end){
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr,int st,int end){
    if(st<end){
        int pivotIdx=partition(arr,st,end);
        quicksort(arr,st,pivotIdx-1);
        quicksort(arr,pivotIdx+1,end);
    }
}
int main(){
    vector<int> arr = {12,31,35,8,32,17};
    int st=0;
    int end=arr.size()-1;
    quicksort(arr,st,end);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}