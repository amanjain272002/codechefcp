#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, counteven = 0, countodd = 0, a;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                counteven++;
            }
            else
            {
                countodd++;
            }
        }
        if (counteven == 0)
        {
            cout << 0 << endl;
        }
        else if (x % 2 != 0)
        {
            cout << counteven/2+counteven%2 << endl;
        }
        else
        {
            if (countodd == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << counteven << endl;
            }
        }
    }
}