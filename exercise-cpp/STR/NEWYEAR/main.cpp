#include<iostream>
using namespace std;
#include<cmath>

void Xoa(string a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}
int main()
{
	int n;
	cin >> n;
	string a[n];
	cin.ignore();

	for(int i = 0; i < n; i++)
	{
		getline(cin , a[i]);
	}

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--;
			}
		}
	}
	cout << n << endl;
	return 0;
}
