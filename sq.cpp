#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t, i, c=0;
    cin>>t;
    int a[t], sum =0;

    for(i=0; i<t; i++)
    {
        cin>>a[i];
        for(int k =2; k<a[i] ; k++)
        {
            if(a[i]%k == 0){
                c++;

break;
        }

    }
    }
    cout<<t-c;
}
