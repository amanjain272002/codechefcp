#include <iostream>
using namespace std;

void prl()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << "YES" << endl;
    }
    else if ((n % 2 == 0 and m % 2 == 0) or (n % 2 != 0 and m % 2 != 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        prl();
    }

    return 0;
}