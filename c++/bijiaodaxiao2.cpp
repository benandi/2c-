#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,temp;
	cin>>a>>b>>c;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(a<c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

