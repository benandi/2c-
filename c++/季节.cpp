#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"ÇëÊäÈëÔÂ·Ý£º";
	cin>>n; 
	if((n==12)||(n==1)||(n==2))
	{
		cout<<"¶¬¼¾"<<endl; 
	}
	else if((n==3)||(n==4)||(n==5))
	{
		cout<<"´º¼¾"<<endl; 
	}
	else if((n==6)||(n==7)||(n==8))
	{
		cout<<"ÏÄ¼¾"<<endl; 
	}
	else if( (n==9)||(n==10)||(n==11 )) 
	{
		cout<<"Çï¼¾"<<endl; 
	}
	else
	{
		cout<<"wrong,number"<<endl; 
	}
    return 0;
}

