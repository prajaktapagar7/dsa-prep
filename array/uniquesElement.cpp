#include<iostream>
using namespace std;

int findUnique(vector<int> arr, int len){
    int ans=0;
    for(int i=0; i<len; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    vector<int > arr(n);

    cout<<"enter size of vector "<<endl;
    cin>>n;
    cout<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Unique element is "<<findUnique(arr,n)<<endl;
}