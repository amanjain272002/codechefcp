#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n,count = 0,w= 0 ,m = 0;
        cin >> n;
        long int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i-1])
            {
                if (a[i-1] != a[0])
                {
                    w++;
                }
                m++;
                
            }
            
        }
        cout << w+m << endl;
    }

    return 0;
}