#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, t, mini, maxi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0; i<n; i++)
            cin>>a[i];
            mini = a[0];
            maxi= a[0];
        for(i=0; i<n; i++)
        {
            if(a[i]>maxi) maxi= a[i];
            if(a[i]<mini) mini = a[i];
        }
        cout<<maxi-mini<<endl;

    }
    return 0;
}
