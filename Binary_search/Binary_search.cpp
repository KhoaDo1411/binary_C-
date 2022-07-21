#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int a[], int l, int r,int x)
{
	int m = (l + r) / 2;
	if (l<=r)
	{
		if (a[m] == x)
		{
			return m;
		}
		else if (a[m] < x)
		{
			l = m + 1;
			binary_search(a, l, r,x);
		}
		else 
		{
			r = m - 1;
			binary_search(a, l, r,x);
		}
	}
	else
	return -1;
}
int main()
{
	int n, a[1000],x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter value that you want to find : ";
	cin >> x;
	cout << "value at position: " << binary_search(a, 0, n-1, x) << endl;
}