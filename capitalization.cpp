#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin>>s;
     p= toupper(s[0]);
     cout<<p;
    for(int i=1; i<s.length(); i++)
        cout<<s[i];
    cout<<endl;
}
