#include<bits/stdc++.h>
#define l(i, n) for(i=0; i<n; i++)
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    string s, k;
    l(i, n)
    {
        cin>>s;
        k[i]=tolower(s[i]);
        cout<<k<<endl;
        if(k[i]=='yes')
            cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
