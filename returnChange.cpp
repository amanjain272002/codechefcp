#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void return_change()
{
    string x;
    cin >> x;
    if (x.length() == 1)
    {
        if (x[0] - '0' < 5)
        {
            cout << 100 << endl;
        }
        else
        {
            cout << 90 << endl;
        }
    }
    else if (x.length() == 2)
    {
        if (x[1] - '0' < 5)
        {
            x[1] = '0';
            cout << 100 - stoi(x) << endl;
        }
        else
        {
            int k = (x[0] - '0') + 1;
            if (k > 9)
            {
                cout << 0 << endl;
            }
            else
            {
                x[0] = k + '0';
                x[1] = '0';
                cout << 100 - stoi(x) << endl;
            }
        }
    }
    else
    {
        cout << "0" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        return_change();
    }

    return 0;
}
