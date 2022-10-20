#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n, b;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    b = arr.front();
    for(auto &a: arr)
        b = b|a;

    cout << b << endl;
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