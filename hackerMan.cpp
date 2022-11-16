#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum;
        cin >> a >> b;
        sum = a + b;
        if ((sum == 2) || (sum == 3) || (sum == 5) || (sum == 7) || (sum == 11))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}