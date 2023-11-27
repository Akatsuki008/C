#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, b,c, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a==1)
            cout<<1<<endl;
            else{
        if(b>c)
        {
            if((a-1)>((b-c)+ (c-1)))
                cout<<2<<endl;
            else if((a-1)<((b-c)+ (c-1)))
                cout<<1<<endl;
            else cout<<3<<endl;

        }
        else if(b<c)
        {
            if((a-1)>((c-b)+(c-1)))
               cout<<2<<endl;
            else if((a-1)<((c-b)+(c-1)))
                    cout<<1<<endl;
                else cout<<3<<endl;
        }
            }
    }
    return 0;
}
