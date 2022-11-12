#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, sum = 0, dif = 0;
        cin >> n;
        long int p[n-1]; // n-1
        for (int i = 0; i < n - 1; i++)
        {
            cin >> p[i];
            sum = sum + p[i];
            dif = max(dif,p[i]);
        }
        sort(p,p+n-1);
        cout<<sum + dif<<endl;
    }

    return 0;
}