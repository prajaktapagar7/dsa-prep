#include<iostream>
using namespace std;

int majorElement(int arr[], int len){
    int max=0;
    int ele;
    for(int i=0; i<len; i++){
        int count=0;
        for(int j=0; j<len; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max<count)
            ele=arr[i];
    }
    return ele;
}
int main() {
    int arr [7] ={1,0,3,3,2,5,3};
    cout<<"Major element is "<<majorElement(arr, 7)<<endl;
}