#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0;
        cin >> n;
        int count = 0;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            count += arr[i];
        }
        for (int i = 1; i <= n; i++)
            if (n * arr[i] == count)
                a += 1;

        if (a < 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}