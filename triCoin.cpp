#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long int n, count = 0;
        int j = 1;
        cin >> n;
        if (n >= 2)
        {
            while (n > 0 && n >= j)
            {
                n = n - j;
                j++;
                count++;
            }
            cout << count << endl;
        }

        else if (n == 1)
        {
            cout << "1" << endl;
        }
    }

    return 0;
}