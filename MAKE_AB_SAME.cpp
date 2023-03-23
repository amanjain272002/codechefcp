#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long int n, countonesA = 0, countonesB = 0;
        cin >> n;
        char a[n],b[n];
        string ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                countonesA++;
            }
            if (b[i] == '1')
            {
                countonesB++;
            }
        }

        if ((countonesA == 0 && countonesB != 0) || (countonesA != 0 && countonesB == 0))
        {
            ans = "NO";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i] && a[i] == '1')
                {
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}