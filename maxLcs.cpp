#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void lcs(string &X, string &Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    cout << L[m][n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, length = 0, count = 0;
        cin >> n;
        string s, alice = "", bob = "";
        cin >> s;
        for (int i = 0; i < n / 2; i++)
        {
            alice = alice + s[i];
        }

        for (int i = n / 2; i < n; i++)
        {
            bob = bob + s[i];
        }
        reverse(bob.begin(), bob.end());

        int l1 = alice.length();
        int l2 = bob.length();
    }

    return 0;
}