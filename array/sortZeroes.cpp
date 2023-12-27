#include <iostream>
using namespace std;

void sortZero(int arr[], int len)
{
    int start = 0;
    int i=0;
    int end = len - 1;

    // while (start <= end)
    // {
    //     if (arr[start] == 1 && arr[end] == 0)
    //     {
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    //     if (arr[start] == 0)
    //     {
    //         start++;
    //     }
    //     if (arr[end] == 1)
    //     {
    //         end--;
    //     }
    // }
    while(start<end){
        if(arr[start]==0){
            swap(arr[start], arr[i]);
            start++;
            i++;
        }else {
            swap(arr[end], arr[i]);
            end--;
        }
    }
}

int main()
{
    int arr[9] = {1,1,0,1,1,0,1,1,0};
    sortZero(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}