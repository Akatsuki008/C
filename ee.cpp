#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    ll x = 0;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        ll totalc = ((n*(n+1))/2) - n;
        ll rcount = 0;
        ll tempc = 0;
        ll i=0;
        ll j=1;
        while(j != n){
            if(v[i] == v[j]){
                tempc++;
                j++;
                //cout << "t:" << tempc << endl;
            }else{
                rcount= rcount + ((tempc*(tempc+1))/2);
                //cout << rcount << endl;
                i=j;
                j++;
                tempc=0;
            }
        }
        cout <<"Case " << ++x <<": "<< totalc-rcount << endl;
    }
}

