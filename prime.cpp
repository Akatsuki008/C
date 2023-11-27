#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int prime(ll n)
{
	if(n<=2)
	return false;
	for(int i =2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		return false;
	}
}
int main()
{
	ll n, t,i, k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0; i<n; i++)
		{
			int arr[n+1];
			cin>>arr[i];
			prime(arr[i]);
		}
	}
}
