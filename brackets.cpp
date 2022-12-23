#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string check(string s)
{
    int count = 0, maxi = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
        maxi = max(count, maxi);
    }
    string b = "";
    for (int i = 0; i < maxi; i++)
    {
        b = b + '(';
    }

    for (int i = 0; i < maxi; i++)
    {
        b = b + ')';
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s = check(s);
        cout << s << endl;
    }

    return 0;
}