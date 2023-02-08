#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int l, r;
        cin >> l >> r;
        cout << 2 * (r - l) + 1 << endl;
    }

    return 0;
}