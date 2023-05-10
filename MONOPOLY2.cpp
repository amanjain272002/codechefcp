#include <iostream>
#include <algorithm>

using namespace std;

void mono_poly()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    if (a[3] > (a[2] + a[1] + a[0]))
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
        mono_poly();
    }
    return 0;
}