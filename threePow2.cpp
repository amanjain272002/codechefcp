#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string solve()
{
    int n;
    cin >> n;
    string s;
    int one = 0, sum = 0, count = 0;
    cin >> s;
    if (s == "1" || s == "10")
    {
        return "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        if (count <= 3)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}