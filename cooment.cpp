#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, c=0;
    string s;
    cin>>s;
    n= s.length();
    for(i=0; i<n; i++)
    {
              if(s[i] == '/' && s[i+1] == '/'){
                    if (s[i+2]== '/'){
                       i= i+1;
                        c=0;
                        continue;
                    }
                    else {
                            c++;
                    break;
                    }
              }

    }
    if(c==0)
    cout<<"No c\n";
    else cout<<"Commnet\n";

}
