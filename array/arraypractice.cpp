#include <iostream>
using namespace std;

int main() {
    int arr[2];
    memset(arr, -1, sizeof(arr));
    for(int i=0; i<2; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}