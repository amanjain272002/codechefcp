#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int l = a.length();
    int conti = 0;
    int k = 0;

    // for odd
    for (int i = 0; i < l; i += 2)
    {
        if (conti == 1 && a[i] == b[i])
        {
            conti = 0;
        }
        if (conti == 0 && a[i] != b[i])
        {
            conti = 1;
            k++;
        }
    }

    // for even
    conti = 0;
    for (int i = 1; i < l; i += 2)
    {
        if (conti == 1 && a[i] == b[i])
        {
            conti = 0;
        }
        if (conti == 0 && a[i] != b[i])
        {
            conti = 1;
            k++;
        }
    }

    cout<<k<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}