#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        int sol =0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            count += b[i];
            sol = count%n;
        }
        cout << a[sol] << endl;
    }
    return 0;
}
