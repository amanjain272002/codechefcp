#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x == y)
            cout << "ANY";

        else if (x < y)
            cout << "FIRST";

        else
            cout << "SECOND";
        cout << "\n";
    }

    return 0;
}