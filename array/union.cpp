#include <iostream>
using namespace std;

vector<int> unionOfArr(int arr[], int brr[], int len1, int len2)
{
    vector<int> ans;
    for (int i = 0; i < len1; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int j = 0; j < len2; j++)
    {
        for (int i = 0; i < len1; i++)
        {
            if (brr[j] == arr[i])
            {
                brr[j] = -1;
                arr[i] = -2;
                break;
            }
     }

        if (brr[j] != -1)
            ans.push_back(brr[j]);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7};
    int brr[] = {3, 4, 5};
    vector<int> ans = unionOfArr(arr, brr, 5, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
}