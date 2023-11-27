#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s;
            cout<<s[i]+48;
        }
        cout<<endl;
    }
    return 0;
}

//48
