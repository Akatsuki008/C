#include<bits/stdc++.h>
using namespace std;
void rev(string s)
{

}
int main()
{
    string s, p;
    cin>>s;
    cin>>p;
    reverse(s.begin(), s.end());
    if(s.compare(p)==0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
