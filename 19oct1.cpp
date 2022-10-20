#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, sol = 0;
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];


        for (int i = 0; i < n; i++)
        {

            if (a[i] != b[i])
                count  += 1;
            
        }
        sort(a, a + n);
        sort(b, b + n);    

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (a[i] != b[j])
        //             count += 1;
        //     }
        // }
        // sort(a, a + n);
        // sort(b, b + n);
        for(int i =0;i<n;i++){
            if(a[i] != b[i])
            sol += 1;
        }
        if(sol!= count )
        cout<<1+sol<<endl;
        else
        cout<<sol<<endl;
        
    }
    return 0;
}