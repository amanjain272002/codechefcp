#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        map<int, int> m;
        for (int i = a; i <= b; i++)
        {
            m[i] = i;
        }
        for (int i = c; i <= d; i++)
        {
            m[i] = i;
        }
        cout << m.size() << endl;
    }

    return 0;
}