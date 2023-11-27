#include<bits/stdc++.h>
using namespace std;
int decimal(long int s)
{
    int dec=0, n=0, rem=0;
    while(s!=0)
    {
        rem = s%10;
        s/=10;
        dec+= rem*pow(2,n);
        n++;
    }
    return dec;
}
int returrn(long int x, long int n)
{
    int c;
    for(int y=1; y<=n; y++)
    {
        int k=(x/pow(2,y));
        c= x^k;
      //  cout<<c<<" "<<y<<endl;
        if(c>=x){
            return y;
        break;
        }
    }

}
int main()
{
   long int t, i, n, p,x, s;
   cin>>t;
   while(t--)
   {
       cin>>n>>s;
       x= decimal(s);
       //cout<<x<<endl;
      cout<<returrn(x,n)<<endl;
   }
    return 0;
}
