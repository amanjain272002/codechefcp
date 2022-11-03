#include <iostream>
using namespace std;

// N number of houses and X is the strength attack
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, max = 0;
        cin >> n >> x;
        long int a;
        for (int i = 1; i <= n; i++)
        {
            long int a;
            cin >> a;
            if (x > a)
            {
                // cout<<x<<endl;
                if (max < i)
                {
                    max = i;
                }
            }
        }

        cout << max << endl;
    }

    return 0;
}