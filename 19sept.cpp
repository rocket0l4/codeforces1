    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {   
        int t;
      	cin>>t;
      	while(t--)
      	{
            int n;
    		cin>>n;
            int arr[n];
    		for (int i=1;i<=n;i++) cin>>arr[i];
    		sort(arr+1,arr+n+1);
    		cout<<arr[n]+arr[n-1]-arr[1]-arr[2]<<endl;  
      	}
      	return 0;
    }


