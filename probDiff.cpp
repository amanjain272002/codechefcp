#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d)
        {
            cout << 0 << endl;
        }
        else if ((a == b && a == c && a != d) || (b == c && b == d && b != a) ||
                 (a == b && b == d && a != c) || (b == d && b == a && b != c) ||
                 (a == c && a == d && a != b))
        {
            cout << 1 << endl;
        }

        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}