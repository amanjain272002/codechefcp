#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], l = 0, r = n - 1, i = n;
        while (l <= r)
        {
            if (l == r)
            {
                arr[l] = n;
            }
            else
            {
                arr[l] = n;
                arr[r] = n - 1;
                n -= 2;
            }
            l++;
            r--;
        }
        for (int j = 0; j < i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}