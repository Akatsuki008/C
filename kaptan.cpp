#import<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p, q, c=0;
    cin>>n>>p;
    int a[300];
    for(i=0; i<p; i++)
        cin>>a[i];
        cin>>q;
    for(i=p; i<p+q; i++)
        cin>>a[i];
    sort(a,a+(p+q));
     for(i=0; i<p+q; i++)
     {
        //cout<<a[i]<<" ";
         if(a[i]!=a[i+1])
            c++;
     }
     if(c==n)
        cout<<"I become the guy.\n";
     else cout<<"Oh, my keyboard!\n";
     return 0;
}
