#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        if (n == 1)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "1";
            for (int i = 0; i < n - 2; i++)
            {
                cout << "0";
            }
            cout << "5" << endl;
        }
    }

    return 0;
}