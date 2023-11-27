#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n, i, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll k = (n/2)*(n-1);
        ll a[n+1], b[k+1];
        for(i=0; i<k; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            a[i]= b[i*(n-1)/2];
        }
    }
}
