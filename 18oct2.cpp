#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        int a[100001], b[100001];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        cin >> m;
        for (int i = 1; i <= m; i++)

            cin >> b[i];
        sort(b + 1, b + m + 1);
        if (a[n] == b[m])
        {
            cout << "Alice" << endl
                 << "Bob" << endl;
        }
        else if (a[n] > b[m])
        {
            cout << "Alice" << endl
                 << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl
                 << "Bob" << endl;
        }
    }
    return 0;
}