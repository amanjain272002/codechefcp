#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string c;
        cin >> c;
        cout<<c[0];
        for (int i = 1; i < n; i++)
        {
            if (c[i] != c[i - 1])
            {
                cout<<c[i];
            }
        }
        cout << endl;
    }

    return 0;
}
