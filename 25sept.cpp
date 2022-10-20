#include <bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x >> a[1] >> a[2] >> a[3];
        if (a[x] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            x = a[x];
            if (a[x])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}