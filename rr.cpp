#include<bits/stdc++.h>
using namespace std;
int main()
{
   int st, i, l, b=0, a=0;
   string s;
   cin>>s;
   l = s.length();
   if(s[0]=='b')
    for(i=1; i<l; i++)
   {
       if(s[i]=='b')
        b++;
   }
   else if(s[0]=='a' && s[l-1]=='b'){
        a=1;
    for(i=1; i<l-2; i++)
   {
    if(s[i]=='a' || s[i+1]=='b')
        a++;
   }
   }
cout<<a<<0<<b<<endl;
   if(b==l-1) cout<<"Valid\n";
   else if(a>0) cout<<"Valid\n";
   else cout<<"Invalid\n";
    return 0;
}
