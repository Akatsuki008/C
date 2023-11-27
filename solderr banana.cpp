#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, cost =0, kk;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        cost += k*i;
    }
    kk= cost-n;
    if(kk>0)
    cout<<kk<<endl;
    else cout<<0<<endl;
    return 0;
}
