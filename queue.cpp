#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n, i;
    cin>>n;
    int num[n+1];
    for(i=0; i<n; i++)
        cin>>num[i];
      int mini=-5;                                                                                                                                                                                                                                                                     ;
    for(i=0; i<n; i++)
    {
        if(num[i]<mini){
          //  mini= num[i];
            cout<<i<<" ";
        }
    }
    cout<<endl;

/*
    int n, t, i;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='B' && s[i+1]== 'G'){
            s[i]= 'G', s[i+1]='B';
            i++;
        }

    }
    }
    cout<<s<<endl;
    */
    return 0;
}
