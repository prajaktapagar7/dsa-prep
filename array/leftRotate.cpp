#include<iostream>
using namespace std;

void leftRotate(int arr [], int len){
    int last=arr[0];
    for(int i=0; i<len; i++){
        if(i==len-1)
            arr[i]=last;
        arr[i]=arr[i+1];
    }
}

int main() {
    int arr [5]={1,2,3,4,5};
    leftRotate(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}