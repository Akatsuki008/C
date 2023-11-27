
/*/*int main()
{
    long int a, n,b, c, i;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b==c)|| (b+c==a)||(a+c==b))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}*/
/*int main()
{
    long int n, i, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n+5], c=1;
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        for(i=0; i<n-1; i++)
            {
                if(a[i]!=a[i+1])
                    c++;
            }
           // cout<<c<<endl;
            if(c==n) cout<<"YES\n";
            else cout<<"NO\n";
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()*/
//{
   /* int n, t=0, i, k=0, l=0;
    char s[9], r[]="RRRRRRRR", d[]="........";
    scanf("%d", &n);
    while(n--)
    {
        for(i=0; i<8; i++)
        {
            //k=0;
        scanf("%s", &s);
        t = strcmp(s,r);
        if(t==0) k=8;
    }
    if(k==8) printf("R\n");
    else printf("B\n");
    k=0;
    }*/
 /*   int a[3]= {2, 4, 6}, b=1;
    int sum= a[b]+b;
    printf("Result is: %d", sum);

    return 9;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(auto x:v){
            cout << x << " ";
        }
        cout << endl;
    }
}