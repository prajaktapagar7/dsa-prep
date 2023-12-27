#include <iostream>
using namespace std;

bool search(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

int findNum(int arr[], int len, int num)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

int findMax(int arr[], int len){
    int max= arr[0];
    for(int i=1; i<len; i++){
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}

void extremePrint(int arr [], int len){
    for(int i=0; i<len+1/2; i++){
        if(i==len-1){
            cout<<arr[i]<<endl;
            break;
        }else if(i>len-1){
            break;
        }
        cout<<arr[i]<<", "<<arr[len-1]<<", ";
        len--;
    }
}

void reverseArray(int arr [], int len){
    int start=0;
    int end=len-1;
    int mid = start + (end-start)/2;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[7] = {2, 5, 5, 9, 8, 1, 0};
    // is 1 present??
    search(arr, 7, 11) ? cout << "present" : cout << "not present" << endl;

    cout << endl;

    // find out number of zeroes?
    int brr[10] = {1, 0, 0, 0, 1, 1, 0, 0, 0};
    cout << "Number of Zeroes " << findNum(brr, 9,0) << endl;
    cout << endl;

    //find max number in array
    int crr[4] ={2,6,47,20};
    cout<<"Max number in array is "<<findMax(crr,4)<<endl;
    cout << endl;

    //Extreme prints in array
    int drr[9] ={1,2,3,4,5,6,7,8,9};
    extremePrint(drr,9);
    cout << endl;

    //reverse an array
    int err[6] ={1,2,3,4,5,6};
    reverseArray(err,6);
    for(int i=0; i<6;i++){
        cout<<err[i]<<", ";
    }
    cout <<endl;
}