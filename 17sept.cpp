#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string s;
    string r = "Timru";
    cin >> s;
    sort(s.begin(), s.end());
    if (s == r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
