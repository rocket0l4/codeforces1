#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n;
        int arr[200000];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr + 1, arr + 1 + n);
        for (int i = 1; i <= n; i++)
        {
            if (arr[n] > arr[n - 1] + 1)
            {
                count = 0;
            }
            else
            {
                count += 1;
            }
        }
        if (count >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}