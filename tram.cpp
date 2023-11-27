#include<bits/stdc++.h>
#define l(i, n) for(i=1; i<=n; i++)
using namespace std;
int main()
{
    int n, maxi;
    int i;
    cin>>n;
    int a[n+1], b[n+1], total[n+1];
    memset(total, 0, sizeof(total));

    l(i, n)
    {
        cin>>a[i]>>b[i];
        total[i]=( total[i-1] - a[i])+ b[i];

          // cout<<total[i]<<endl;
    }
    //  cout<<"mm"<<total[0]<<endl;
maxi = total[1];
for(i=2; i<=n; i++)
{
    if(total[i]>maxi)
        maxi = total[i];
}
cout<<maxi<<endl;
    return 0;
}
