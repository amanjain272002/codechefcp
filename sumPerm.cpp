#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	if (n % 2 == 1)
	{
		cout << -1 << endl;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			cout << i + 1 << " " << i << " ";
			i++;
		}
		cout << endl;
	}
}

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
