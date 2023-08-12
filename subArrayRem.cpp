#include <iostream>
using namespace std;

void rem()
{
    int n;
    cin >> n;
    int cone = 0, czero = 0;
    int a;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cone++;
        }
        else
        {
            czero++;
        }
    }
    if (czero > cone)
    {
        ans += cone;
    }
    else
    {
        ans += czero;
        int k = cone - czero;
        k = k / 3;
        ans += k;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rem();
    }

    return 0;
}