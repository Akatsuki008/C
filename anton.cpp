#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    string s;
    cin>>n;
    cin>>s;
    int a=0, d=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
            a++;
        if(s[i]=='D')
            d++;
    }
    if(a>d) cout<<"Anton\n";
    else if(a==d) cout<<"Friendship\n";
    else cout<<"Danik\n";
    return 0;
}
