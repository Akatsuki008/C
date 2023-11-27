#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=1; i<n; i++)
        {
            if(s[i]=='1'){
            break;

            }
        }
         cout<<i<<endl;
    }
}
