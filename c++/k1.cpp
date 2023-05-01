#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	d=24;
	a,b,c=d/3;
	c=c+a/2;
	b=b+a/2;
	
	a=a+b/2;
	c=c+b/2;
	
	a=a+c/2;
	b=b+c/2;
	cout<<a<<" "<<b<<" "<<c<<" "<<e<<endl;
	
    
    return 0;
}

