#include <iostream>
#include <string>
using namespace std;

void dmy()
{
    string s;
    int f1 = 0, f2 = 0;
    cin >> s;

    int d1, m1, d2, m2;
    d1 = 10 * (s[0] - '0') + (s[1] - '0');
    m1 = 10 * (s[3] - '0') + (s[4] - '0');
    d2 = 10 * (s[3] - '0') + (s[4] - '0');
    m2 = 10 * (s[0] - '0') + (s[1] - '0');

    if (d1 <= 31 and m1 <= 12)
    {
        f1 = 1;
    }

    if (d2 <= 31 and m2 <= 12)
    {
        f2 = 1;
    }

    if (f1 == 1 and f2 == 1)
    {
        cout << "BOTH" << endl;
    }

    if (f1 == 1 and f2 == 0)
    {
        cout << "DD/MM/YYYY" << endl;
    }

    if (f1 == 0 and f2 == 1)
    {
        cout << "MM/DD/YYYY" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dmy();
    }

    return 0;
}