#include <iostream>
using namespace std;

vector<int> intesecOfArr(int arr[], int brr[], int len1, int len2)
{
    vector<int> ans;
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
                arr[i] = -1;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[4] = {1, 2, 3, 3};
    int brr[5] = {3, 3, 4, 9, 1};
    vector<int> ans = intesecOfArr(arr, brr, 4, 5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}