#include<bits/stdc++.h>
using namespace std;
struct man{
	int age;
	string name;
};
class woman{
	public:
	int cg;
	int h;
	woman(int a, int b){
		cg = a;
		h = b;
	}
};
int main()
{
//	man m;
//	m.age= 12;
//	cin>> m.name ;
//	cout<<m.age<<m.name<<endl;
//	int &ag = m.age;
//	cout<<ag<<endl;

	woman p(3, 5);
	cout<<p.cg<<p.h;
}
