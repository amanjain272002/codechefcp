#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        x = 100 - 100 * x / 100;
        y = 200 - 200 * y / 100;
        if (x > y)
        {
            cout << "SECOND" << endl;
        }
        else if (x < y)
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }

    return 0;
}