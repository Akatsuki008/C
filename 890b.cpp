#include<bits/stdc++.h>
#define ll long long
#define l(i,n) for(i=0; i<n; i++)
using namespace std;
int main()
{
    ll i, n, t, sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1], c=0;
        sum = 0;
        l(i, n)
        {
            cin>>a[i];
            sum+=a[i];
            if (a[i]==1) c++;
        }
        if(n==1)
        cout<<"NO\n";
       else if(sum >= n+c) cout<<"YES\n";
       else cout<<"NO\n";
    }
    return 0;
}
