#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T, H, x, y, C;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> x >> y >> C;
		if(C>=H*(x+floor(y*0.5)))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}

	return 0;
}
