#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0, a = 9, b = 1;
        while (n > a)
        {
            n -= a;
            count += a * b;
            b *= 10;
            a--;
        }
        count += n * b;
        cout << count << endl;
    }

    return 0;
}