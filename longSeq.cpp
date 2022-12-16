#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        if (m['1'] == 1 || m['0'] == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}