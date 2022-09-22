#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, count = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 9))
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}