#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long int maxsum = (a[0] + a[n - 1]);
        for (int i = 0; i < n - 1; i++)
        {
            long int sum = (a[i] + a[i + 1]);
            if (sum > maxsum)
            {
                maxsum = sum;
            }
        }
        cout << maxsum << endl;
    }

    return 0;
}