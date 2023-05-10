#include <iostream>
using namespace std;

void PLUS_2MINUS_1()
{
    int y, sum = 0;
    cin >> y;
    if (y == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 3 * y << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PLUS_2MINUS_1();
    }
    return 0;
}