#include <iostream>
#include <cmath>
using namespace std;
int a, b, c, de, ce;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
		
		cin >> a >> b >> c;
		if ((a > b) && (a > c))
		{
			de = a;
		}
		else if ((b > a) && (b > c))
		{
			de = b;
		}
		else
		{
			de = c;
		}
		if ((a < b) && (a < c))
		{
			ce = a;
		}
		else if ((b < a) && (b < c))
		{
			ce = b;
		}
		else
		{
			ce = c;
		}
		cout << "最大：" << de << endl;
		cout << "最小：" << ce << endl;
	
	}
    return 0;
}
