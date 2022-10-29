#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> a;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k != 0)
                a.insert(k);
        }
        cout << a.size() << endl;
    }

    return 0;
}