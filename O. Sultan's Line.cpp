https://codeforces.com/group/rZXLOcYbKV/contest/309080/problem/O

#include<iostream>
using namespace std;
int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((y2 - y1) * (x3 - x1) == (x2 - x1) * (y3 - y1))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}