#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[11],j, i;
    for(i=0; i<10; i++)
    {
        cin>>n[i];
    }
     for(i=0; i<10; i++)
    {
        for(j=0; j<10-i-1; j++){
        if(n[j]>n[j+1])
        {
            swap(n[j], n[j+1]);
        }
        }
         cout<<n[i]<<" ";
    }
    return 0;
}
// 5 1 8 2 9 3 5 4 2 10
