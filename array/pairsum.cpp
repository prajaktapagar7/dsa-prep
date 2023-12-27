#include<iostream>
using namespace std;
void pairSum(int arr[],int len, int sum){
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i]+arr[j]==sum)
             cout<< "Pair found "<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

void tripletSum(int arr [], int len, int sum){
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            for(int k=j+1;k<len; k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"Pair found"<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr [6]={1,2,3,4,5,6};
    int sum=6;
    pairSum(arr,6,sum);

    //triplet sum
    int brr [7] ={10,20,30,40,50,60,70};
    int triSum =100;
    tripletSum(brr,7,triSum);
}