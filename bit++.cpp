#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6], i, j, t=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    for( i=0; i<5; i++)
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                if(i<=2) t+= 2-i;
                else t+= i-2;
                if(j<=2) t=t+ 2-j;
                else t=t+ j-2;
            }
        }
        cout<<t<<endl;

}
