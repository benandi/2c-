#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,ge,shi;
	cout<<"������һ��ʮλ��:";
	cin>>n;
	shi=n/10;
	ge=n%10;
	n=ge*10+shi;
	cout<<n<<endl;
	 return 0;
}

