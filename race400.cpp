#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, mn;
        cin >> x >> y >> z;
        mn = min(min(x, y), z);
        if (mn == x)
        {
            cout << "ALICE" << endl;
        }

        else if (mn == y)
        {
            cout << "BOB" << endl;
        }

        else
        {
            cout << "CHARLIE" << endl;
        }
    }
    return 0;
}
