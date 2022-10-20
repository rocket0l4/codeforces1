#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0,sol=0;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int as1[26] = {0};
        int bs1[26] = {0};
        for (int i = 0; i < n; i++)
        {
            as1[(a[i]) - 97]++;
            bs1[(b[i]) - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            sol = min(as1[i],bs1[i]);
            count = max(count, sol);
        }
        cout << count << endl;
    }
    return 0;
}