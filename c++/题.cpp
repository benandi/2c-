#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a=1,b=0,c=0,d=1,aa,bb,cc,dd;
	aa=((a&&b)||(c&&d));
	//bb=(!a(a&&b||c)&&d);
	cc=!a&&(b||c||d);
	dd=a||b&&c||d;
	cout<<aa<<endl;
	cout<<bb<<endl;
	cout<<cc<<endl;
	cout<<dd<<endl;
	 
    return 0;
}

