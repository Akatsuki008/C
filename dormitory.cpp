#include<bits/stdc++.h>
#define pi 2 * acos(0.0)
using namespace std;
int main()
{
    int n, i, p,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p;
        if(p==1)
            c++;
    }
    if(c!=0)
        cout<<"HARD\n";
    else cout<<"EASY\n";
    cout<<pi;
    return 0;
}
