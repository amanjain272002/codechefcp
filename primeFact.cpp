#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, cnt = 0;
        cin >> x >> y;

        if (x % 3 == 0)
        {
            x = x + 3;
            y = y - x;
            cnt++;
        }
        else if (x % 5 == 0)
        {
            x = x + 5;
            y = y - x;
            cnt++;
        }
        else if (x % 7 == 0)
        {
            x = x + 7;
            y = y - x;
            cnt++;
        }

        cnt = cnt + y / 2;
        cout << cnt << endl;
    }
    return 0;
}