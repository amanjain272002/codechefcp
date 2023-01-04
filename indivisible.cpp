#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], val1, val2;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i < 100; i++)
        {
            if (a[0] % i != 0 && a[1] % i != 0 && a[2] % i != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
