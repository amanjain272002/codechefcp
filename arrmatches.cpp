#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, count = 0;
        cin >> a >> b;
        c = a + b;
        int d = c;
        while (d > 0)
        {
            d = d / 10;
            count++;
        }
        int arr[count];
        for (int i = 0; i < count; i++)
        {
            if (c > 0)
            {
                d = c;
                c = c / 10;
                d = d % 10;
                arr[i] = d;
            }
        }
        // for (int i = 0; i < count; i++)
        // {
        //     cout<<arr[i];
        // }
        int matches = 0;

        for (int i = 0; i < count; i++)
        {
            if (arr[i] == 0)
                matches = matches + 6;
            else if (arr[i] == 1)
                matches = matches + 2;
            else if (arr[i] == 2)
                matches = matches + 5;
            else if (arr[i] == 3)
                matches = matches + 5;
            else if (arr[i] == 4)
                matches = matches + 4;
            else if (arr[i] == 5)
                matches = matches + 5;
            else if (arr[i] == 6)
                matches = matches + 6;
            else if (arr[i] == 7)
                matches = matches + 3;
            else if (arr[i] == 8)
                matches = matches + 7;
            else if (arr[i] == 9)
                matches = matches + 6;
        }
        cout << matches << "\n";
    }

    return 0;
}
