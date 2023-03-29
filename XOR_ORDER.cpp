#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, check = 0;
        cin >> a >> b >> c;
        for (int i = 1; i < 100; i++)
        {
            if ((a ^ i) < (b ^ i) && (b ^ i) < (c ^ i))
            {
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}