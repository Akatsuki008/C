#include<bits/stdc++.h>
#define l(i, n) for(i=0; i<n; i++)
using namespace std;
int main()
{
    int n, i, c=0;

    cin>>n;
    int s[n+1];
    l(i, n)
    {
        cin>>s[i];

    }
    l(i, n)
    {
        if(s[i]!= s[i+1])
            c++;
       // cout<<c<<endl;
    }
    cout<<c<<endl;
    return 0;
}

