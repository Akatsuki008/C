#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    int t;
    cin>>t;
    int i, j, k, kk, c=0;
    int n[t+1];
    for(i=0; i<t; i++)
    {
        cin>>n[i];
        c=0;
        for(j=1; j<=n[i]; j++)
        {
            for(k=1;k<=n[i]; k++)
            {
                //cout<<j<<k<<endl;
                kk= (lcm(i,j)/gcd(i,j));
                if(kk<=3)
                    c++;
            }
        }
        cout<<c<<"__"<<endl;
    }
}
