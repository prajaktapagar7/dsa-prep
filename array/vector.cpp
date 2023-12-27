#include <iostream>
using namespace std;

int main()
{
    vector<int> v;

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << endl;

    vector<int> a(5, 1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    // vector<int> abc {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < abc.size(); i++)
    // {
    //     cout << abc[i] << ", ";
    // }
}