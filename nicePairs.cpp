#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;

void nicePairs()
{
    string s;
    int n, count = 0;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n and j <= i + 9; j++)
        {
            if ((j - i) == abs(s[j] - s[i]))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nicePairs();
    }

    return 0;
}