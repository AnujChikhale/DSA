#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int n){
    int st=0;
    int end=n;
    while(st<=end){
        int mid = st+ (end-st)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]= {23,45,62,74,92,99};
    int key=45;
    int n=6;
    cout<<binarySearch(arr,key,n);
    return 0;
}