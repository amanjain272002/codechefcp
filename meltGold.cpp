#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int x,y,sum = 0;
        cin>>x>>y;
        
        for (int i = 1; i <= x; i++)
        {
            if (y>=x)
            {
                break;
            }
            else
            {
                sum++;
                y = y + i;
            }
        }
        cout<<sum<<endl;
    }
    
	return 0;
}
