#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,t;
	//cout<<"输入温度:";cin>>t;
	//cout<<"输入数字:";cin>>t;
	cout<<"输入里程：";
	cin>>t;
	//a=t>20
	//b=t<30
	

	//if(t<=20 && t>200)
	if(t<=3)
	
	{
		//cout<<"可以出去"<<endl;
		//a=t-20;
		b=t*5;
		cout<<"要付"<<b<<"元"; 
		//cout<<"1.68"<<endl;
	} 
	else
	{
		//cout<<"不可以出去" <<endl;
		a=t-3;
		b=a*2.3;
		cout<<"要付"<<b<<"元"; 
			 
	}

	
	
    return 0;
}

