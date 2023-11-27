#include <iostream>
#include <string>
using namespace std;
struct num{
	string str;
	int t;
	int result = 0;
};
int main()
{
    num n;
    cin>>n.str;
    n.result = 0;
    for(int i=0; i<n.str.length(); i++)
    {
        if(n.str[i]>='0' && n.str[i]<='9')
        {
            n.result += (n.str[i]-'0');
        }
    }

    cout<<"Result: "<<n.result<<endl;
//    }
num p;
p.result = 14;
cout<<p.result;
    return 0;
}
