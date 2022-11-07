#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, count = 0;
        cin >> x >> y;
        if (y > x)
        {
            cout << x << endl;
        }
        else
        {
            while (x != 0)
            {
                if (x >= y)
                {
                    x = x - y;
                    count++;
                }
                else
                {
                    x = x - 1;
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}