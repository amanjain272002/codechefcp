#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d >= c >= b >= a)
            if (a + b + c == d)
                cout << "1" << endl;
            else if (a + b + c > d)
                cout << floor((a + b + c) / 3) << endl;
    }

    return 0;
}