#include<bits/stdc++.h>
using namespace std;
int main()
{

    //v.clear();

   // cout<<v.back()<<endl;
    //v.pop_back();
    //v.insert(v.begin()+1, 999);
    //sort(v.begin(), v.end());
   // reverse(v.begin(), v.end());
   vector<int> v;
   int n;
   for(int i =0; i<5; i++)
   {
       //c++
       cin>>n;
       v.push_back(n);
   }
   cout<<"tt"<<endl;
   vector<int>:: iterator it;
   for(int i=0; i<5; i++)
   cout<<v[i]<<endl;

   cout<<"tt"<<endl;

   sort(v.begin(), v.end());
   for(it=v.begin(); it!= v.end(); it++)
   cout<<*it<<endl;

   cout<<"tt"<<endl;

    /*vector<int> :: iterator it;
    int n;
    for(int i =0; i<5; i++)
    {
       cin>>n;
      v.push_back(n);
    }

    int x= 4;
    vector<int>:: iterator in;
     in = find(v.begin(), v.end(), 7);
    if(in!=v.end())
    {
        cout<<"found\n"<<in-v.begin()<<endl;
    }

    for(it=v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<endl;
    } */
    return 0;
}
