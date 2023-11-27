#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    sort(s.begin(), s.end());
    for(int i=n/2; i<n-1; i++)
        cout<<s[i]<<"+";
    cout<<s[n-1]<<endl;
    return 0;
}
