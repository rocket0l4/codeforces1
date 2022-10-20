#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> ans;
        for (int i = 0; i < s1.size(); i++)
        {
            ans.insert(s1[i]);
            ans.insert(s2[i]);
        }
        cout << ans.size() - 1 << endl;
    }

    return 0;
}