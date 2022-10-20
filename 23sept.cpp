#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k % 4 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i = i + 2)
        {
            if ((i + 1) % 4 == 0)
                cout << i << " " << i + 1 << endl;
            else if (k % 2)
                cout << i << " " << i + 1 << endl;
            else
                cout << i + 1 << " " << i << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}