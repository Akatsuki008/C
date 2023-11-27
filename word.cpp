#include<bits/stdc++.h>
using namespace std;
int count(string s)
{
    int u=0,l=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            u++;
        if(s[i]>=97 && s[i]<=122)
                l++;
    }
    if(l>=u) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else  transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
}

int main()
{
    string s;
    cin>>s;
    count(s);
        return 0;
}
