#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long int n, d, count = 0;
    cin >> n >> d;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] <= d)
        {
            i = i + 1;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}