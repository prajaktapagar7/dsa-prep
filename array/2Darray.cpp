#include<iostream>
using namespace std;

vector<int> rowSum(int arr [][3],int row, int col){
    vector<int> ans;
    int ele=0;
    for(int i=0; i<row; i++){
      
        for(int j=0; j<col; j++){
             ele+=arr[i][j];
        }
         ans.push_back(ele);
            ele=0;
        
    }
    return ans;
}
vector<int> colSum(int arr[][3], int row, int col){
    vector<int> ans;
    int ele=0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ele+=arr[j][i];
        }
        ans.push_back(ele);
        ele=0;
    }
    return ans;
}

int main () {
    // int arr[3][3];
    // //row-wise input
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //printing array
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
    // cout<<endl;
    int brr[3][3]={{1,2,5},{4,5,11},{7,8,9}};
    vector<int> rsum = rowSum(brr,3,3);
    for(int i=0; i<3; i++){
        cout<<rsum[i]<<" ";
    }
    vector<int> csum = colSum(brr,3,3);
    for(int i=0; i<3; i++){
        cout<<csum[i]<<" ";
    }
}