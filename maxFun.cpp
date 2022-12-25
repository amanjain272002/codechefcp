#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, l = 0, h = 0, mid = 0;
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        l = 0;
        h = n - 1;
        mid = ceil((l + h) / 2);
        l = a[l];
        h = a[h];
        mid = a[mid];
        cout << abs(h - l) + abs(mid - l) + abs(h - mid) << endl;
    }
}