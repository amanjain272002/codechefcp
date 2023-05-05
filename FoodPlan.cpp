#include <iostream>
using namespace std;

void solve(double n, double m)
{
    if (n <= m)
    {
        cout << "ONLINE" << endl;
    }

    else if (n > m)
    {
        n = n - (n * 10) / 100;
        // cout<<n<<" "<<m<<endl;
        if (n > m)
        {
            cout << "DINING" << endl;
        }
        else if (n < m)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        double n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}
