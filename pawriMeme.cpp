#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.substr(i, 5) == "party")
            {
                s[i + 2] = 'w';
                s[i + 3] = 'r';
                s[i + 4] = 'i';
                i = i + 4;
            }
        }

        cout << s << endl;
    }

    return 0;
}