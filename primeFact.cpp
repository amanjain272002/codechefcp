#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y, c = 0;
        cin >> n >> y;

        if (n % 2 == 0)
        {
            int a = y - n;
            c = a / 2;
            if (a % 2)
            {
                c++;
            }
            cout << c << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                n += 3;
                c++;
            }
            else if (n % 5 == 0)
            {
                n += 5;
                c++;
            }
            else if (n % 7 == 0)
            {
                c++;
                n += 7;
            }
            int a = y - n;
            c += a / 2;
            if (a % 2)
            {
                c++;
            }

            cout << c << endl;
        }
    }

    return 0;
}