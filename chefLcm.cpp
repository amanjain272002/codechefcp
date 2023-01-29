#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, lcm, sum = 0;
        cin >> n;
        lcm = sqrt(n);
        for (int i = 1; i <= lcm; i++)
        {
            if (n % i == 0)
            {
                if (i == n / i)
                {
                    sum += i;
                }
                else
                {
                    sum = sum + i + n / i;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}