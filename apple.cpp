#include<bits/stdc++.h>
#define f(i,n) for(i=0; i<n; i++)
#define ll long long
using namespace std;

ll seq(ll n)
{
    /*
    cout<<n;
    while(n!=1)
    {
        if(n%2) n=n/2;
        else n=(n*3)+1;
        cout<<" "<<n;
    }
    cout<<endl;
    */
    cout<<n<<" ";
    if(n==1) return 1;
    if(n%2==0) return seq(n/2);
    else return seq((n*3)+1);
}
int main()
{
    ll n , i;
    cin>>n;
    seq(n);
    cout<<endl;
    return 0;
}
