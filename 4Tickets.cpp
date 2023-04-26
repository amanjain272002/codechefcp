#include <iostream>
using namespace std;

void tickets()
{
    int x;
    cin >> x;
    if (4*x <= 1000)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        tickets();
    }
    return 0;
}
