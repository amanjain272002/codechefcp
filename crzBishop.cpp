#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll int n, odd, even, cal;
        cin >> n;
        if (n == 1)
        {
            cout << "0" << endl;
        }

        else if (n % 2 == 0)
        {
            odd = n / 2;
            even = n / 2;
            cal = (odd - 1) + (even - 1) * 2;
            cout << cal << endl;
        }
        else
        {
            odd = n / 2 + 1;
            even = n - odd;
            cal = odd + (even - 1) * 2;
            cout << cal << endl;
        }
    }
}